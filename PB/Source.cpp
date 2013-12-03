#include <stdio.h>
#include <ctype.h>

void A1(void);
void A2(void);
void A4(void);
void A5(void);

int main(void)
{
	A4();
	fflush(stdin);
	getc(stdin);
}


void A1(void)
{
	int a[10];
	for (int i = 1; i <= 10; i++)
	{
		a[i - 1] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}

void A2(void)
{
	int a[255];

	int i = 0,sum = 0;
	do
	{
		printf("Geben Sie eine Zahl ein (0 für Abbruch und Berechnung): > ");
		scanf("%d", &a[i]);
		fflush(stdin);
		if (a[i] == 0)
			break;
		sum += a[i];
		i++;
	} while (true);

	printf("Summe: %d\n", sum);
	printf("Mittelwert: %d", sum / i); // -> FLoat
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

/// AUFGABE 5
/*
Es gibt Ja aus wenn der alle Buchstaben im string gleich sind wie der Letzte Buchstabe
Wenn einer oder mehrere ungleich sind dann gibt es Nein aus

*/