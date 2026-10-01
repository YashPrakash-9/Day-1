#include <stdio.h>

int main(void)
{
	char character;

	scanf(" %c", &character);

	if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
		character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
		printf("Vowel\n");
	else
		printf("Consonant\n");

	return 0;
}
