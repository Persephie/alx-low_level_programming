#include <stdio.h>
/**
 * main - Prints the number of arguments passed into main
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
