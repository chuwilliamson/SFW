/*******************

	Example program showcasing the appropriate usage
	sfw features. This library is SUPER TINY and 
	NOT featureful. It is intended for education
	use only.

	It attempts to provide the simplest openGL
	context and drawing options possible.

	author: Esmeralda Salamone, esmes@aie.edu.au

********************/


#include "DrawObjects.h"
#include "Cells.h"

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
using namespace sfw;


void main()
{
	//first we need to initialize our graphics context- or window.
	initContext(SCREEN_WIDTH, SCREEN_HEIGHT, "Dinosaurs!");

	float xpos = 300, ypos = 400; // position
	float shoot = xpos;
	float xacc = 0, yacc = 0;	  // acceleration
	float xvel = 0, yvel = 0;	  // velocity
	float speed = 100;
	
	
	// then we need to update our buffers, poll for input, etc.
	while (stepContext())
	{
		/*
			Movement controls for moving the player around the screen
			When the user hits certain key the player object will move in the corresponding directions
		*/
		if (getKey('w')) ypos -= 1; //W key will move the player object positive on the y axis
		if (getKey('s')) ypos += 1; //S key will move the player object negative on the y axis
		if (getKey('a')) xpos -= 1; //A key will move the player object positive on the x axis
		if (getKey('d')) xpos += 1; //D key will move the player object negative on the x axis
		if (getKey(' ')) shoot++;
		Objects::drawPlayer(40, xpos, ypos);
			
		//drawLine(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
		Objects::drawRect(50, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
		Objects::drawRect(50, SCREEN_WIDTH / 2 + 100, SCREEN_HEIGHT / 2);
		Objects::drawRect(50, SCREEN_WIDTH / 2 - 100, SCREEN_HEIGHT / 2);
	}

	//finally, we need to properly shut stuff down.
	termContext();
}
