#include "main.h"
/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
