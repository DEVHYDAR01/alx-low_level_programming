#include "main.h"
/**
 * print_chessboard - This function will print the chessboard.
 * @a: This is the first value char.
 *
 */
void print_chessboard(char (*a)[8])
{
	int chess, j;

	chess = 0;
	j = 0;

	while (chess < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar (a[i][j]);
		}
		chess++;
		_putchar("\n");
	}
}
