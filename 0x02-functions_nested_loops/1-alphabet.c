#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase.
 * Return: Always 0.
 */
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar (10);
}
