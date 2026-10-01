#include <stdio.h>

int main(void)
{
	int first, second;

	scanf("%d %d", &first, &second);

	first ^= second;
	second ^= first;
	first ^= second;

	printf("After swap: %d %d\n", first, second);

	return 0;
}
