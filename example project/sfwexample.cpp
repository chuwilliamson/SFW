/*******************

	Example program showcasing the appropriate usage
	sfw features. This library is SUPER TINY and 
	NOT featureful. It is intended for education
	use only.

	It attempts to provide the simplest openGL
	context and drawing options possible.

	author: Esmeralda Salamone, esmes@aie.edu.au

********************/



#include "sfwdraw.h"

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
using namespace sfw;
void main()
{
	//first we need to initialize our graphics context- or window.
	initContext(SCREEN_WIDTH, SCREEN_HEIGHT, "Dinosaurs!");

	
	float xpos = 300, ypos = 400; // position
	float xacc = 0, yacc = 0;	  // acceleration
	float xvel = 0, yvel = 0;	  // velocity
	float speed = 100;
	bool pooped = false;
	// then we need to update our buffers, poll for input, etc.
	while (stepContext())
	{
		// we haven't covered frame independent movement yet,
			// but we'll use some euler integration
		// we also haven't gotten into vector math yet,
			// so we'll use cardinal speeds 
		xpos += xvel * getDeltaTime();
		ypos += yvel * getDeltaTime();

		// base acceleration on the keypress
		yacc = xacc = 0;
		if (getKey('a')) xacc = -speed;
		if (getKey('d')) xacc = speed;
		if (getKey('w')) yacc = -speed;
		if (getKey('s')) yacc = speed;
		
		// more euler integration
		xvel += xacc * getDeltaTime();
		yvel += yacc * getDeltaTime();

		drawCircle(xpos, ypos, 30);
		if (getKey('f'))
		{
			pooped = !pooped;
			
		}
		if(pooped)
			drawCircle(xpos, ypos, 5);
			
		drawLine(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
		 
	}

	//finally, we need to properly shut stuff down.
	termContext();
}