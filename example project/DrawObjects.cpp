#include "DrawObjects.h"

void Objects::drawRect(float size, float xPos, float yPos)
{
	drawLine(xPos + size, yPos + size, xPos - size, yPos + size); //bottom side
	drawLine(xPos - size, yPos - size, xPos + size, yPos - size); //top side
	drawLine(xPos + size, yPos - size, xPos + size, yPos + size); //right side
	drawLine(xPos - size, yPos + size, xPos - size, yPos - size); //left side
}

void Objects::drawWumpus(float size, float xPos, float yPos)
{
	drawRect(size, xPos, yPos); //body of wumpus
	drawCircle(xPos, yPos - size*2, size); //head of wumpus
}

void Objects::drawGold(float size, float xPos, float yPos)
{
	drawRect(size, xPos, yPos); //pot to store gold
	drawCircle(xPos, yPos - size, size); //gold
}

void Objects::drawPit(float size, float xPos, float yPos)
{
	drawCircle(xPos, yPos, size-20); //the pit of no return
}

void Objects::drawPlayer(float size, float xPos, float yPos)
{
	drawLine(xPos, yPos + size, xPos, yPos - size); //player body
	drawCircle(xPos, yPos - size, size/2); //player head
	drawLine(xPos + size, yPos - size/4, xPos - size, yPos - size/4); //player arms
}