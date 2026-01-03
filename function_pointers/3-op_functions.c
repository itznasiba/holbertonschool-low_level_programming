#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracs two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplys two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the mod of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
