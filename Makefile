CC=gcc
CCURSE=-lncurses
CFLAG=-c

all: main.o display.o
	$(CC) main.o display.o -o noon $(CCURSE)

main.o: src/main.c
	$(CC) $(CFLAG) src/main.c

display.o: src/display.c
	$(CC) $(CFLAG) src/display.c

clean:
	rm -rf *o noon
