#include <stdlib.h>
#include <check.h>
#include "../src/roman.h"

START_TEST(r2a_1)
{
	roman_t r = "I";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 1);
}
END_TEST

START_TEST(r2a_2)
{
	roman_t r = "II";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 2);
}
END_TEST

START_TEST(r2a_3)
{
	roman_t r = "III";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 3);
}
END_TEST

START_TEST(r2a_4)
{
	roman_t r = "IV";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 4);
}
END_TEST

START_TEST(r2a_5)
{
	roman_t r = "V";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 5);
}
END_TEST

START_TEST(r2a_6)
{
	roman_t r = "VI";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 6);
}
END_TEST

START_TEST(r2a_7)
{
	roman_t r = "VII";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 7);
}
END_TEST

START_TEST(r2a_8)
{
	roman_t r = "VIII";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 8);
}
END_TEST

START_TEST(r2a_9)
{
	roman_t r = "IX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 9);
}
END_TEST

START_TEST(r2a_10)
{
	roman_t r = "X";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 10);
}
END_TEST

START_TEST(r2a_11)
{
	roman_t r = "XI";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 11);
}
END_TEST

START_TEST(r2a_15)
{
	roman_t r = "XV";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 15);
}
END_TEST

START_TEST(r2a_19)
{
	roman_t r = "XIX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 19);
}
END_TEST

START_TEST(r2a_20)
{
	roman_t r = "XX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 20);
}
END_TEST

START_TEST(r2a_25)
{
	roman_t r = "XXV";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 25);
}
END_TEST

START_TEST(r2a_30)
{
	roman_t r = "XXX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 30);
}
END_TEST

START_TEST(r2a_40)
{
	roman_t r = "XL";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 40);
}
END_TEST

START_TEST(r2a_49)
{
	roman_t r = "XLIX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 49);
}
END_TEST

START_TEST(r2a_50)
{
	roman_t r = "L";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 50);
}
END_TEST

START_TEST(r2a_90)
{
	roman_t r = "XC";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 90);
}
END_TEST

START_TEST(r2a_100)
{
	roman_t r = "C";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 100);
}
END_TEST

START_TEST(r2a_400)
{
	roman_t r = "CD";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 400);
}
END_TEST

START_TEST(r2a_500)
{
	roman_t r = "D";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 500);
}
END_TEST

START_TEST(r2a_900)
{
	roman_t r = "CM";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 900);
}
END_TEST

START_TEST(r2a_1000)
{
	roman_t r = "M";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 1000);
}
END_TEST

START_TEST(r2a_3999)
{
	roman_t r = "MMMCMXCIX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 3999);
}
END_TEST

START_TEST(r2a_fail_invalid_char)
{
	roman_t r = "G";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, -1);
}
END_TEST

/* Tests for roman_to_arabic to suite */
Suite* check_r2a(void)
{
	Suite* s;
	TCase* tc;

	s = suite_create("roman_to_arabic");
	tc = tcase_create("r2a");

	tcase_add_test(tc, r2a_1);
	tcase_add_test(tc, r2a_2);
	tcase_add_test(tc, r2a_3);
	tcase_add_test(tc, r2a_4);
	tcase_add_test(tc, r2a_5);
	tcase_add_test(tc, r2a_6);
	tcase_add_test(tc, r2a_7);
	tcase_add_test(tc, r2a_8);
	tcase_add_test(tc, r2a_9);
	tcase_add_test(tc, r2a_10);
	tcase_add_test(tc, r2a_11);
	tcase_add_test(tc, r2a_15);
	tcase_add_test(tc, r2a_19);
	tcase_add_test(tc, r2a_20);
	tcase_add_test(tc, r2a_25);
	tcase_add_test(tc, r2a_30);
	tcase_add_test(tc, r2a_40);
	tcase_add_test(tc, r2a_49);
	tcase_add_test(tc, r2a_50);
	tcase_add_test(tc, r2a_90);
	tcase_add_test(tc, r2a_100);
	tcase_add_test(tc, r2a_400);
	tcase_add_test(tc, r2a_500);
	tcase_add_test(tc, r2a_900);
	tcase_add_test(tc, r2a_1000);
	tcase_add_test(tc, r2a_3999);
	tcase_add_test(tc, r2a_fail_invalid_char);

	suite_add_tcase(s, tc);
	return s;
}
