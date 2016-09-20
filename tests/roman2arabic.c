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

/* Tests for roman_to_arabic to suite */
Suite* check_r2a(void)
{
	Suite* s;
	TCase* tc;

	s = suite_create("roman_to_arabic");
	tc = tcase_create("r2a");

	tcase_add_test(tc, r2a_1);

	suite_add_tcase(s, tc);
	return s;
}
