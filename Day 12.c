#include <stdio.h>

int main(void)
{
	int number;

	scanf("%d", &number);

	if (number >= 0)
	{
		if (number == 0)
			printf("Zero\n");
		else
			printf("Positive\n");
	}
	else
		printf("Negative\n");

	return 0;
}
