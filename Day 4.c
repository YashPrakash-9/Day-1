#include <stdio.h>

int main(void)
{
	const double pi = 3.14159;
	double radius;

	scanf("%lf", &radius);
	printf("Area=%.2f, Circumference=%.2f\n",
		   pi * radius * radius, 2 * pi * radius);

	return 0;
}
