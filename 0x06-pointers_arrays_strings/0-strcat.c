#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: string to be concantenate
 * @dest: string to append onto
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
