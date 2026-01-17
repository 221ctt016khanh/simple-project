CC=gcc
CFLAGS= -Wall add.c sub.c divine.c mul.c
all: output
output: main.o
	$(CC) $(CFLAGS) -o output main.o
main.o: main.c
	$(CC) $(CFLAGS) -c main.c
clean:
	rm -f *.o output
