#include "main.h"
/**
 * print_chessboard - This function will print the chessboard.
 * @a: This is the first value char.
 *
 */
void print_chessboard(char (*a)[8])
{
	int chess, b;

	for (chess = 0; chess < 8; chess++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar (a[chess][b]);
		}
		_putchar('\n');
	}
}
