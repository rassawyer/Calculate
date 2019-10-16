#
# Makefile
#

all: calculate 

calculate: Calculate.c
	clang -ggdb3 -O0 -std=c11 -g -Wall -Werror -o calculate Calculate.c -lm

clean:
	rm -f *.o a.out core calculate
