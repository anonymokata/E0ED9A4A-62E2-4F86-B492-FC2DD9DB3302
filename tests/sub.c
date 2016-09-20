#include <stdlib.h>
#include <check.h>

/* Tests our ability to preform subtraction */
Suite* check_subtraction(void)
{
	Suite* s;
	TCase* tc;

	s = suite_create("subtraction");
	tc = tcase_create("sub");

	suite_add_tcase(s, tc);
	return s;
}
