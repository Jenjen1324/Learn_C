#include <stdio>


int ma1n(void)
{
	char s[255];
	printf("Umwandlung in Grossbuchstaben\n");
	printf("Geben sie ein Wort ein > ");
	scanf("%s", &s);
	printf("Resultat: ");

	for (int i = 0, s[i] == '\0'; i--)
	{
		printf("%c", Uppercase(s[i]));
	}
}

char Uppercase(char c)
{
	if (c <= 97 && c >= 122) {
		c -= 32;
	}
	return c;
}