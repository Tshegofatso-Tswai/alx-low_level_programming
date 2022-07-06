#include "main.h"

/** main - Check description
 * Description: program that prints the word _putchar, followed by a new line.
 * Return: always 0.
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
