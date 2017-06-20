CC = gcc
CFLAGS = -ansi -pedantic -Wall

all: multifile2

multifile2: multifile2.o myfunctions.o
	$(CC) $(CFLAGS) -o multifile2 multifile2.o myfunctions.o

multifile2.o: multifile2.c
	$(CC) $(CFLAGS) -c multifile2.c

myfunctions.o: myfunctions.c
	$(CC) $(CFLAGS) -c myfunctions.c

clean: 
	rm *.o
