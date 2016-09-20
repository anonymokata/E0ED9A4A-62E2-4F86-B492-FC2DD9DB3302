#include <stdlib.h>
#include <check.h>
#include "../src/roman.h"

START_TEST(sub_I_II)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("II");
	ck_assert_int_eq(0, arabic_to_roman(b-a, &r));
	ck_assert_str_eq("I", (char*)r);
}
END_TEST

START_TEST(sub_I_V)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("V");
	ck_assert_int_eq(0, arabic_to_roman(b-a, &r));
	ck_assert_str_eq("IV", (char*)r);
}
END_TEST

START_TEST(sub_I_VI)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("VI");
	ck_assert_int_eq(0, arabic_to_roman(b-a, &r));
	ck_assert_str_eq("V", (char*)r);
}
END_TEST

START_TEST(sub_failure_zero)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("I");
	ck_assert_int_eq(-1, arabic_to_roman(b-a, &r));
}
END_TEST

START_TEST(sub_failure_negative)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("V");
	int b = roman_to_arabic("I");
	ck_assert_int_eq(-1, arabic_to_roman(b-a, &r));
}
END_TEST

/* Tests our ability to preform subtraction */
Suite* check_subtraction(void)
{
	Suite* s;
	TCase* tc;

	s = suite_create("subtraction");
	tc = tcase_create("sub");

	tcase_add_test(tc, sub_I_II);
	tcase_add_test(tc, sub_I_V);
	tcase_add_test(tc, sub_I_VI);
	tcase_add_test(tc, sub_failure_zero);
	tcase_add_test(tc, sub_failure_negative);

	suite_add_tcase(s, tc);
	return s;
}
