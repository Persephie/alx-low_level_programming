#include "main.h"
/**
 * factorial - searches for factorial
 * @n: number to get factorial
 * Return:int
 */
int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}
else if (n == 0)
{
	return (1);

}
	return (n * factorial(n - 1));

}
