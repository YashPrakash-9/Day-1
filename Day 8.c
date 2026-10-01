#include <stdio.h>

int main(void)
{
	long long n;
	long long sum;

	scanf("%lld", &n);
	if (n % 2 == 0) {
		sum = (n / 2) * (n + 1);
	} else {
		sum = n * ((n + 1) / 2);
	}

	printf("Sum=%lld\n", sum);

	return 0;
}
