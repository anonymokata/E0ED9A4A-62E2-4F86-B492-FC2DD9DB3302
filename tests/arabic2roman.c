#include <stdlib.h>
#include <check.h>
#include "../src/roman.h"

START_TEST(a2r_1)
{
	char* r;
	int ret;
	ret = arabic_to_roman(1, &r);
	ck_assert_int_eq(ret, 0);
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

	suite_add_tcase(s, tc);
	return s;
}
