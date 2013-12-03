#include <stdio.h>
#include <ctype.h>

void A4(void);

int main(void)
{
	A4();
}


void A4(void)
{
	char s[255];
	char t[255];
	printf("Eingabe: ");
	scanf("%s", &s);

	int i = 0;
	while (s[i] != '\0')
	{
		if (isupper(s[i]))
			printf("%c", tolower(s[i]));
		else if (islower(s[i]))
			printf("%c", toupper(s[i]));
		i++;

	}

	fflush(stdin);
	getc(stdin);
}