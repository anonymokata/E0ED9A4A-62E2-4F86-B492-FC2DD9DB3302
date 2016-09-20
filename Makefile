AR = ar
CC = gcc
check_FLAGS =  `pkg-config --cflags --libs check`

%.o: %.c
	$(CC) -c $< -o $@

test: tests/main.o
	$(CC) $? -o tests/check $(check_FLAGS)
	./tests/check

clean:
	rm -f tests/*.o
	rm -f tests/check

.PHONY: test clean
