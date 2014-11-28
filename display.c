#ifndef DISPLAY
#define DISPLAY

#include "display.h"

#define DELAY 30000

struct dim_t dimensions;

void init_display(void)
{
	
	initscr();
	noecho();
	curs_set(0);
	
	dimensions.x = 90;
	dimensions.y = 22;
}

void refresh_display(const int grid[])
{
	fprintf(stderr, "Entered refresh_display.\n");
	int k = 0;
	while (1) {
		clear();
		int i, j, m = 0;

		for (i = 0; i < dimensions.y; i++) {
			for (j = 0; j < dimensions.x; j++) {
				int index;
				get_index(&index, j, i);
				if (grid[index] == 1) {
					mvprintw(i, j, ".");
				} else {
					mvprintw(i, j, "#");
				}
			}
		}

		refresh();

		sleep(1);
	}
}

void get_coords(int index, int *x, int *y) 
{
	*y = index / dimensions.x;
	*x = index % dimensions.x;
}

void get_index(int *index, int x, int y) 
{
	*index = y * dimensions.x + x;
}

struct dim_t get_dimensions(void)
{
	return dimensions;
}

#endif
