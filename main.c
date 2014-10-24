#include <stdlib.h>
#include <stdio.h>
#include "display.h"

#define DELAY 30000

//void main_loop(const int **grid[]);


int main(int argc, char *argv[])
{
	init_display();
	struct dim_t d = get_dimensions();
	int grid[d.x*d.y];
	int i, j;

	fprintf(stderr, "Dimensions: x=%d y=%d\n", d.x, d.y);

	for (i = 0; i < d.x*d.y; i++) {
		if ((d.x*12)+12 == i) {
			grid[i] = 2;
		} else {
			grid[i] = 1;
		}
	}


	refresh_display(grid);

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
