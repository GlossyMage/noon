#include <stdlib.h>
#include <stdio.h>
#include "display.h"
#include "player.h"

#define DELAY 30000

//void main_loop(const int **grid[]);


int main(int argc, char *argv[])
{
	if (init_player("Yacchatta.mp3")) {
		return 0;
	}
//	init_display();
//	refresh_display();

	return 0;
}
/*
void main_loop(const int **grid[])
{

	while (1) {
		refresh_display(grid);
		usleep(DELAY);
	}
}
*/
