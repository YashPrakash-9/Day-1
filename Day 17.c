#include <math.h>
#include <stdio.h>

int main(void)
{
	double a;
	double b;
	double c;
	double discriminant;

	scanf("%lf %lf %lf", &a, &b, &c);

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0)
		printf("Roots are real and different: %g, %g\n",
			(-b + sqrt(discriminant)) / (2 * a),
			(-b - sqrt(discriminant)) / (2 * a));
	else if (discriminant == 0)
		printf("Roots are real and same: %g\n", -b / (2 * a));
	else
		printf("Roots are complex\n");

	return 0;
}
