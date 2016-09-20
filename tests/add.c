#include <stdlib.h>
#include <check.h>

/* Tests our ability to preform addition */
Suite* check_addition(void)
{
	Suite* s;
	TCase* tc;

	s = suite_create("addition");
	tc = tcase_create("add");

	suite_add_tcase(s, tc);
	return s;
}
