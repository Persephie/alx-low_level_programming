#include <stdio.h>

int main()
{
	printf("What is the radius? ");
	int radius;
	scanf("%i", &radius);

	double area = 3.14159 * (radius * radius);
	printf("The area of the cicle is %f\n", area);
	return 0;
}
