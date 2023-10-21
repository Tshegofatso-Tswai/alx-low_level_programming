#include "main.h"

/**
 * add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtraction operator
 * @a: first in
 * @b: second int
 * Return: difference of 2 numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - product of 2 numbers
 * @a: first int
 * @b: second int
 * Return: product of the numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: result of the division of the numbers
 */
int _div(int a, int b)
{
	if (b == 0){
		return 0; // Handle division by zero
	}
	return (a / b);
}

/**
 * mod - get remainder of the division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: remainder of division of the numbers
 */
int mod(int a, int b)
{
	if (b == 0 ) {
		return 0; // Handle division by zero
	}
	return (a % b);
}
