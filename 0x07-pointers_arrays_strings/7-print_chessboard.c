#include "main.h"
/**
 * print_chessboard - This function will print the chessboard.
 * @a: This is the first value char.
 *
 */
void print_chessboard(char (*a)[8])
{
	int chess, b;

	chess = 0;
	b = 0;

	while (chess < 8)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar (a[chess][b]);
		}
		chess++;
		_putchar("\n");
	}
}
