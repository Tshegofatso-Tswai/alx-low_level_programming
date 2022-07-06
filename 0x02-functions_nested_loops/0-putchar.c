#include "main.h"

/**
 * main - Check description
 *
 * Description: 'program that print word _putchar, followed by new line.'
 *
 * Return: int(Success).
 */
int main(void)
{
	int n = 0;
	char str_put[8] = "_putchar";

	while (n < 8)
	{
		_putchar(str_put[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
