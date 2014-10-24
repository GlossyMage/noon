#include <stdint.h>
#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

struct dim_t 
{
	uint32_t x;
	uint32_t y;
};

struct dim_t get_dimensions(void);
void init_display(void);
void refresh_display(const int grid[]);

