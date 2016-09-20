#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "roman.h"

/* map arabic numerals to roman numerals */
struct map_elem {
	arabic_t arabic;
	roman_t roman;
};

struct map_elem rmap[] = {
	{1, "I"},
	{4, "IV"},
	{5, "V"},
	{9, "IX"},
	{10, "X"},
	{40, "XL"},
	{50, "L"},
	{90, "XC"},
	{100, "C"},
	{400, "CD"},
	{500, "D"},
	{900, "CM"},
	{1000, "M"},
};
#define MAP_ELEM_LENGTH 13

// Convert arabic numeral a to roman numeral stored in r.
// Zero returned on success, negative value on error.
int arabic_to_roman(arabic_t a, roman_t* r)
{
	if (1 > a || MAX_ARABIC < a) // arabic out of accepted range
		return -1;

	// Allocate vector for roman numerals
	*r = calloc((MAX_ROMAN_LENGTH+1),sizeof(char)); //+1 for '\0'
	if (NULL == *r)
		return errno;
	int idx = MAP_ELEM_LENGTH-1; //last index in mapped roman numeral list

	// Build roman numeral
	do {
		struct map_elem v = rmap[idx];
		if (a >= v.arabic) {
			strcat((char*)*r, v.roman);
			a = a - v.arabic;
		} else {
			idx--;
		}
	} while ((0 < a) && (0 <= idx));

	if (0 != a) {
		free(r);
		return -1;
	}

	return 0;
}
