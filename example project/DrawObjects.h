#pragma once
#include "sfwdraw.h"

using namespace sfw;

class Objects
{
public:
	/*
		Draws a simple rectangle to the screen and decide what you would like to have in the rectangle
			-Parameters
				1- Size of the rectangle this will determine how large the rectangle will appear on the screen
				2- Position of the rectangle on the X-Axis
				3- Position of the rectangle on the Y-Axis
	*/
	static void drawRect(float a_Size, float a_xPos, float a_yPos);

	/*
		Draw Wumpus a simple design for a wumpus the drawRect function calls this function to create a wumpus in the cell
		if it has one.
			-Parameters
				1- size of the wumpus on screen
				2- Position on the X- Axis
				3- Position on the Y- Axis
	*/
	static void drawWumpus(float a_Size, float a_xPos, float a_yPos);

	/*
		Draws a pit to the screen. This is called in the drawRect function if the cell contains a pit
			-Parameters
				1- size
				2- xPos
				3- yPos
	*/
	static void drawPit(float a_Size, float a_xPos, float a_yPos);

	/*
		Draws a pot of gold to the screen. This is called in the drawRect function if the cell contains a pile of gold
			-Parameters
				1- size
				2- xPos
				3- yPos
	*/
	static void drawGold(float a_Size, float a_xPos, float a_yPos);

	/*
		Creates a player objects
		-Parameters
			-size
			-xPos
			-yPos
	*/
	static void drawPlayer(float a_Size, float a_xPos, float a_yPos);
};
