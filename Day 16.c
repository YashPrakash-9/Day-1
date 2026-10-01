#include <stdio.h>

int main(void)
{
	int first;
	int second;
	int third;

	scanf("%d %d %d", &first, &second, &third);

	if (first >= second && first >= third)
		printf("Largest is %d\n", first);
	else if (second >= third)
		printf("Largest is %d\n", second);
	else
		printf("Largest is %d\n", third);

	return 0;
}
