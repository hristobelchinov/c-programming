all: help.out strlength.out strconcat.out strcompare.out

help.out: help.c
	gcc help.c -o help.out

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o

strlength.out: strlength.c mystrings.o
	gcc strlength.c mystrings.o -o strlength.out

strconcat.out: strconcat.c mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.out

strcompare.out: strcompare.c mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.out

clean:
	del *.out *.o