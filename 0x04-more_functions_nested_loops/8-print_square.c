#include "main.h"


void print_square(int size)
{
  int squareSize = size, squareLength = size, squareWidth = size;
  
  if (size <= 0)
    {
      _putchar('\n');
      return;
    }
  while (squareLength > 0)
    {
      squareWidth = squareSize;
      while (squareWidth > 0)
	{
	  _putchar('#');
	  squareWidth--;
	}
      _putchar('\n');
      squareLength--;
    }

  return;
}
