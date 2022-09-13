#include "main.h"

/** 
 * times_table - prints times table
 * Return:void
 */
void times_tables(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (i = 1; <= 9; i++)
		{
			int result = n * i;

			_putchar(',');
			_putchar(' ');
			(result <= 9) ?
			_putchar(' ') :
			_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
		}
	_putchar('\n');
	}
}
