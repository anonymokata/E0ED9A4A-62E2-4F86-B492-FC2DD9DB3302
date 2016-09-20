#include <stdlib.h>
#include <check.h>
#include "../src/roman.h"

START_TEST(add_I_I)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("I");
	ck_assert_int_eq(0, arabic_to_roman(a+b, &r));
	ck_assert_str_eq("II", (char*)r);
}
END_TEST

START_TEST(add_I_II)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("II");
	ck_assert_int_eq(0, arabic_to_roman(a+b, &r));
	ck_assert_str_eq("III", (char*)r);
}
END_TEST

START_TEST(add_I_III)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("III");
	ck_assert_int_eq(0, arabic_to_roman(a+b, &r));
	ck_assert_str_eq("IV", (char*)r);
}
END_TEST

START_TEST(add_I_IV)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("IV");
	ck_assert_int_eq(0, arabic_to_roman(a+b, &r));
	ck_assert_str_eq("V", (char*)r);
}
END_TEST

START_TEST(add_I_V)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("V");
	ck_assert_int_eq(0, arabic_to_roman(a+b, &r));
	ck_assert_str_eq("VI", (char*)r);
}
END_TEST

START_TEST(add_IV_I)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("IV");
	int b = roman_to_arabic("I");
	ck_assert_int_eq(0, arabic_to_roman(a+b, &r));
	ck_assert_str_eq("V", (char*)r);
}
END_TEST

START_TEST(add_IV_V)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("IV");
	int b = roman_to_arabic("V");
	ck_assert_int_eq(0, arabic_to_roman(a+b, &r));
	ck_assert_str_eq("IX", (char*)r);
}
END_TEST

START_TEST(add_X_XXX)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("X");
	int b = roman_to_arabic("XXX");
	ck_assert_int_eq(0, arabic_to_roman(a+b, &r));
	ck_assert_str_eq("XL", (char*)r);
}
END_TEST

START_TEST(add_failure_1)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("G");
	int b = roman_to_arabic("I");
	ck_assert_int_eq(-1, arabic_to_roman(a+b, &r));
}
END_TEST

START_TEST(add_failure_2)
{
	roman_t r; //final roman numeral
	int a = roman_to_arabic("I");
	int b = roman_to_arabic("MMMCMXCIX");
	ck_assert_int_eq(-1, arabic_to_roman(a+b, &r));
}
END_TEST

/* Tests our ability to preform addition */
Suite* check_addition(void)
{
	Suite* s;
	TCase* tc;

	s = suite_create("addition");
	tc = tcase_create("add");

	tcase_add_test(tc, add_I_I);
	tcase_add_test(tc, add_I_II);
	tcase_add_test(tc, add_I_III);
	tcase_add_test(tc, add_I_IV);
	tcase_add_test(tc, add_I_V);
	tcase_add_test(tc, add_IV_I);
	tcase_add_test(tc, add_IV_V);
	tcase_add_test(tc, add_X_XXX);
	tcase_add_test(tc, add_failure_1);
	tcase_add_test(tc, add_failure_2);

	suite_add_tcase(s, tc);
	return s;
}
