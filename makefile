all:ankitha

ankitha: sortb.o swap.o
	gcc sortb.o swap.o -o ankitha.o

sortb.o: sortb.c
	gcc -c sortb.c

swap.o: swap.c
	gcc -c swap.o
