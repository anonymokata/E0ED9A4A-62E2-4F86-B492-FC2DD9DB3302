#include <stdlib.h>
#include <check.h>

Suite* check_a2r(void);
Suite* check_r2a(void);
Suite* check_addition(void);
Suite* check_subtraction(void);

int main(void)
{
	int number_failed;
	SRunner* sr;

	Suite* s_a2r = check_a2r();
	Suite* s_r2a = check_r2a();
	Suite* s_add = check_addition();
	Suite* s_sub = check_subtraction();

	sr = srunner_create(s_a2r);
	srunner_add_suite(sr, s_r2a);
	srunner_add_suite(sr, s_add);
	srunner_add_suite(sr, s_sub);

	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
