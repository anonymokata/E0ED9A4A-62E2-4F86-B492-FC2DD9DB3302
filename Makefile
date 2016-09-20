AR = ar
CC = gcc
check_FLAGS =  `pkg-config --cflags --libs check`

%.o: %.c
	$(CC) -c $< -o $@

all: src/libroman.a src/calc

src/libroman.a: src/roman.o
	$(AR) rcs $@ $?

src/calc: src/calc.o src/libroman.a
	$(CC) $? -o $@

test: tests/main.o tests/arabic2roman.o tests/roman2arabic.o tests/add.o tests/sub.o src/libroman.a
	$(CC) $? -o tests/check $(check_FLAGS)
	./tests/check

clean:
	rm -f tests/*.o
	rm -f tests/check
	rm -f src/*.a
	rm -f src/*.o

.PHONY: all test clean
