#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: the product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: the division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - count the remainder of division of two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder of the division of two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
