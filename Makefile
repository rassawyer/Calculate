#
# Makefile
#

all: calculate 

calculate: Calculate.c add.c sub.c mul.c divide.c inputOperator.c 
	clang -ggdb3 -O0 -std=c11 -g -Wall -Werror -o calculate Calculate.c add.c sub.c mul.c divide.c inputOperator.c -lm

clean:
	rm -f *.o a.out core calculate
