#include "Cells.h"
#include "DrawObjects.h"

void Cells::genGrid(int rows, int cols)
{
	for (int i = 0; i <= rows; i++)
		for (int j = 0; j <= cols; i++)
		{
			xPos = i;
			yPos = j;
			Objects::drawRect(xPos, yPos, 20);
		}
}