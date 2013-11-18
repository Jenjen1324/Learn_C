#include <stdio.h>
#include <string.h>

void A5(void);
void A6(void);

char Uppercase(char);

int main(void)
{
	A6(); // Diesen Wert ändern um Aufgabe zu ändern
	printf("\n\n Program done!");
	fflush(stdin);
	getc(stdin);
	return 0;
}


/// AUFGABE 5
void A5(void)
{
	char s[255];
	printf("Umwandlung in Grossbuchstaben\n");
	printf("Geben sie ein Wort ein > ");
	scanf("%s", &s);
	printf("Resultat: ");

	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("%c", Uppercase(s[i]));
	}
}

char Uppercase(char c)
{
	if (c >= 97 && c <= 122) {
		c -= 32;
	}
	return c;
}

/// AUFGABE 6
void A6(void)
{
	int count;
	float pi = 4;
	bool isPlus = false; // Da es mit minus anfängt
	int divisor = 1;
	printf("Berechnung von Pi\n Wie viele Berechnungsschritte? > ");
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		printf("n=%d Pi=%f\n", i, pi);

		divisor += 2;

		if (isPlus)
		{
			isPlus = false;
			pi = ((pi / 4.) + (1. / divisor)) * 4.;
		}
		else
		{
			isPlus = true;
			pi = ((pi / 4.) - (1. / divisor)) * 4.;
		}
	}
}