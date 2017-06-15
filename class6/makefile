CC = gcc
CFLAGS = -c -ansi -pedantic -Wall

all: multifile2

multifile2: multifile2.o myfunctions.o
	$(CC) -o multifile2 multifile2.o myfunctions.o

multifile2.o: multifile2.c
	$(CC) $(CFLAGS) multifile2.c

myfunctions.o: myfunctions.c
	$(CC) $(CFLAGS) myfunctions.c

clean: 
	rm *.o
