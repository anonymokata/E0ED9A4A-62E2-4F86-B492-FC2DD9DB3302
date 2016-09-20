#include <stdlib.h>
#include <check.h>

Suite* check_a2r(void);

int main(void)
{
	int number_failed;
	SRunner* sr;

	Suite* s_a2r = check_a2r();

	sr = srunner_create(s_a2r);

	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
