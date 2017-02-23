CC = gcc

all: worldclock.x
	make worldclock.x

main.o: main.c
	$(CC) -c main.c

worldclock.x: main.o
	$(CC) main.o -o worldclock.x

clean:
	rm -f main.o