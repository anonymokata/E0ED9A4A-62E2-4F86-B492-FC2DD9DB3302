# Polish notation Roman Numeral Calculator

This packages builds a library `libroman.a` for converting from Roman numeral to Arabic numeral and from Arabic numeral to Roman Numeral.
A small calculator program is also built (`src/calc`) that handles addition and subtraction in Polish notation.

Written for this coding exercise: http://codingdojo.org/cgi-bin/index.pl?KataRomanCalculator


## Building

    make
    make test

## Check Unit Testing

The check unit testing framework is used. https://libcheck.github.io/check/

    Running suite(s): arabic_to_roman
     roman_to_arabic
     addition
     subtraction
    100%: Checks: 70, Failures: 0, Errors: 0


## Calculator

    > ./src/calc + II II
    >> IV
    > ./src/calc - IV X
    >> VI
    > ./src/calc - I E
    >> Invalid Roman Numeral
    > ./src/calc - I I
    >> Failed to preform the subtraction


### Built and Tested on

 * GNU Make 4.1
 * Ubuntu 14.04 and 16.04 x86_64
