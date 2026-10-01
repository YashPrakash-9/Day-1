#include <stdio.h>

int main(void)
{
	double principal, rate, simpleInterest, amount;
	int time, year;

	scanf("%lf %lf %d", &principal, &rate, &time);

	simpleInterest = principal * rate * time / 100;
	amount = principal;
	for (year = 0; year < time; year++) {
		amount *= 1 + rate / 100;
	}

	printf("Simple Interest=%.10g, Compound Interest=%.10g\n",
		   simpleInterest, amount - principal);

	return 0;
}
