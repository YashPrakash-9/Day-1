#include <stdio.h>

int main(void)
{
	char character;

	scanf(" %c", &character);

	if (character >= 'A' && character <= 'Z')
		printf("Uppercase alphabet\n");
	else if (character >= 'a' && character <= 'z')
		printf("Lowercase alphabet\n");
	else if (character >= '0' && character <= '9')
		printf("Digit\n");
	else
		printf("Special character\n");

	return 0;
}
