#include <stdio.h>

int main()
{
	char name;
	printf("What is your first name? ");
	scanf("%c", &name);

	char name2;
	printf("What is your second name? ");
	scanf("%c", &name2);

	printf("Hello %c %c.\n", name, name2);
	printf("You look great.\n");
	return 0;
}
