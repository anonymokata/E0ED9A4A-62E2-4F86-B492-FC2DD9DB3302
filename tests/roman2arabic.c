#include <stdlib.h>
#include <check.h>


/* Tests for roman_to_arabic to suite */
Suite* check_r2a(void)
{
	Suite* s;
	TCase* tc;

	s = suite_create("roman_to_arabic");
	tc = tcase_create("r2a");

	suite_add_tcase(s, tc);
	return s;
}
