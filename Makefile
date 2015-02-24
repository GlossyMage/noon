CC=gcc
CCURSE=-lncurses
CMPG123=-lmpg123
CLAO=-lao
CFLAG=-c

all: main.o display.o player.o
	$(CC) main.o display.o player.o -o noon $(CCURSE) $(CMPG123) $(CLAO)

main.o: src/main.c
	$(CC) $(CFLAG) src/main.c

display.o: src/display.c
	$(CC) $(CFLAG) src/display.c

player.o: src/player.c
	$(CC) $(CFLAG) src/player.c

clean:
	rm -rf *o noon
