#include <stdio.h>

int main(void)
{
	double celsius;

	scanf("%lf", &celsius);
	printf("Fahrenheit=%g\n", celsius * 9 / 5 + 32);

	return 0;
}
