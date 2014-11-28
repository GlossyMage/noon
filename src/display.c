#ifndef DISPLAY
#define DISPLAY

#include "display.h"

#define DELAY 30000

struct dim_t dimensions;

int *grid;

void init_display(void)
{
	
	initscr();
	noecho();
	curs_set(0);
	
	dimensions.x = 90;
	dimensions.y = 22;

	init_grid();
}

void init_grid(void)
{
	int i;
	grid = malloc(sizeof (int) * dimensions.x * dimensions.y);
	
	for (i = 0; i < dimensions.x * dimensions.y; i++) {
		int x, y;
		get_coords(i, &x, &y);
		if (24 == x && 7 == y) {
			grid[i] = 2;
		} else {
			grid[i] = 1;
		}
	}
}

void refresh_display(void)
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

// Get coordinates corresponding to the given index.
void get_coords(int index, int *x, int *y) 
{
	*y = index / dimensions.x;
	*x = index % dimensions.x;
}

// Get index corresponding to the given coordinates.
void get_index(int *index, int x, int y) 
{
	*index = y * dimensions.x + x;
}

struct dim_t get_dimensions(void)
{
	return dimensions;
}

#endif
