#include <stdlib.h>
#include <check.h>
#include "../src/roman.h"

START_TEST(a2r_1)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(1, &r);
	ck_assert_str_eq(r, "I");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_2)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(2, &r);
	ck_assert_str_eq(r, "II");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_3)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(3, &r);
	ck_assert_str_eq(r, "III");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_4)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(4, &r);
	ck_assert_str_eq(r, "IV");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_5)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(5, &r);
	ck_assert_str_eq(r, "V");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_6)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(6, &r);
	ck_assert_str_eq(r, "VI");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_7)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(7, &r);
	ck_assert_str_eq(r, "VII");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_8)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(8, &r);
	ck_assert_str_eq(r, "VIII");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_9)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(9, &r);
	ck_assert_str_eq(r, "IX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_10)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(10, &r);
	ck_assert_str_eq(r, "X");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_11)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(11, &r);
	ck_assert_str_eq(r, "XI");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_15)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(15, &r);
	ck_assert_str_eq(r, "XV");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_19)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(19, &r);
	ck_assert_str_eq(r, "XIX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_20)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(20, &r);
	ck_assert_str_eq(r, "XX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_25)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(25, &r);
	ck_assert_str_eq(r, "XXV");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_30)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(30, &r);
	ck_assert_str_eq(r, "XXX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_40)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(40, &r);
	ck_assert_str_eq(r, "XL");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_49)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(49, &r);
	ck_assert_str_eq(r, "XLIX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_50)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(50, &r);
	ck_assert_str_eq(r, "L");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_90)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(90, &r);
	ck_assert_str_eq(r, "XC");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_100)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(100, &r);
	ck_assert_str_eq(r, "C");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_400)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(400, &r);
	ck_assert_str_eq(r, "CD");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_500)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(500, &r);
	ck_assert_str_eq(r, "D");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_900)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(900, &r);
	ck_assert_str_eq(r, "CM");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_1000)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(1000, &r);
	ck_assert_str_eq(r, "M");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_3999)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(3999, &r);
	ck_assert_str_eq(r, "MMMCMXCIX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_fail_large)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(4000, &r);
	ck_assert_int_eq(ret, -1);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_fail_zero)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(0, &r);
	ck_assert_int_eq(ret, -1);
	if (0 == ret) free(r);
}
END_TEST

/* Tests for arabic_to_roman to suite */
Suite* check_a2r(void)
{
	Suite* s;
	TCase* tc;

	s = suite_create("arabic_to_roman");
	tc = tcase_create("a2r");

	tcase_add_test(tc, a2r_1);
	tcase_add_test(tc, a2r_2);
	tcase_add_test(tc, a2r_3);
	tcase_add_test(tc, a2r_4);
	tcase_add_test(tc, a2r_5);
	tcase_add_test(tc, a2r_6);
	tcase_add_test(tc, a2r_7);
	tcase_add_test(tc, a2r_8);
	tcase_add_test(tc, a2r_9);
	tcase_add_test(tc, a2r_10);
	tcase_add_test(tc, a2r_11);
	tcase_add_test(tc, a2r_15);
	tcase_add_test(tc, a2r_19);
	tcase_add_test(tc, a2r_20);
	tcase_add_test(tc, a2r_25);
	tcase_add_test(tc, a2r_30);
	tcase_add_test(tc, a2r_40);
	tcase_add_test(tc, a2r_49);
	tcase_add_test(tc, a2r_50);
	tcase_add_test(tc, a2r_90);
	tcase_add_test(tc, a2r_100);
	tcase_add_test(tc, a2r_400);
	tcase_add_test(tc, a2r_500);
	tcase_add_test(tc, a2r_900);
	tcase_add_test(tc, a2r_1000);
	tcase_add_test(tc, a2r_3999);
	tcase_add_test(tc, a2r_fail_large);
	tcase_add_test(tc, a2r_fail_zero);

	suite_add_tcase(s, tc);
	return s;
}
