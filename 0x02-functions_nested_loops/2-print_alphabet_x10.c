#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int game = 0;
	char bm;

	while (game++ <= 9)
	{
		for (bm = 'a'; bm <= 'z'; bm++)
			_putchar(bm);
		_putchar('\n');
	}
}
