/*
A simple example of using the gfx library.
CSE 20211
9/7/2011
by Prof. Thain
*/

#include <stdio.h>
#include "gfx.h"

int main()
{
	int ysize = 1000;
	int xsize = 1000;

	char c;

	// Open a new window for drawing.
	gfx_open(xsize,ysize,"Example Graphics Program");

	// Set the current drawing color to green.
	gfx_color(200,0,100);

	// Draw a triangle on the screen.
	gfx_line(100,100,200,100);
	gfx_line(200,100,150,150);
	gfx_line(150,150,100,100);

	while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();
		printf("%d ,%d \n",gfx_xpos(), gfx_ypos() );
		
		// Quit if it is the letter q.
		if(c=='q') break;
	}

	return 0;
}