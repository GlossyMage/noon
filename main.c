#include <stdlib.h>
#include <stdio.h>
#include "display.h"

#define DELAY 30000

//void main_loop(const int **grid[]);


int main(int argc, char *argv[])
{
	init_display();
	refresh_display();

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
