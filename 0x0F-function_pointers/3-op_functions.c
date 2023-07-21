#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function sum
 * @a: int 1
 * @b: int 2
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function sub
 * @a: int 1
 * @b: int 2
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - funtion mult
 * @a: int 1
 * @b: int 2
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function div
 * @a: int 1
 * @b: int 2
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function mod
 * @a: int 1
 * @b: int 2
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
