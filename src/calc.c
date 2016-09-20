/*
 * Michael John
 * 2016-09-19
 * Roman Numeral Polish notation calculator
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "roman.h"

void usage(char** argv) {
	printf("Usage: %s [+|-] RomanNumeral RomanNumeral\n", argv[0]);
}

int main(int argc, char** argv)
{
	if (4 != argc) {
		usage(argv);
		return 1;
	}

	roman_t r; //final roman numeral
	int a = roman_to_arabic(argv[2]);
	int b = roman_to_arabic(argv[3]);
	if (0 >= a || 0 >= b) {
		printf("Invalid Roman Numeral\n");
		return 1;
	}

	if (0 == strncmp("+", argv[1], 1)) {
		if (0 != arabic_to_roman(a+b, &r)) {
			printf("Failed to preform the addition\n");
			return 1;
		}
	} else if (0 == strncmp("-", argv[1], 1)) {
		if (0 != arabic_to_roman(b-a, &r)) {
			printf("Failed to preform the subtraction\n");
			return 1;
		}
	} else {
		printf("Unknown operation\n");
		usage(argv);
		return 1;
	}

	// Print result
	printf("%s\n", r);

	free(r);
	return 0;
}
