#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void A1(void);
void A2(void);
void A3(void);
void A4(void);
void A4_2(void);
void A5(void);
void A6(void);

void hello(int,int);
int CToF(int);
int FToC(int);
char Uppercase(char);

int main(void)
{
	A1(); // Diesen Wert ändern um Aufgabe zu ändern
	printf("\n\n Program done!");
	fflush(stdin);
	getc(stdin);
	return 0;
}

/// AUFGABE 1
void A1(void)
{
	hello(5, 3);
}

void hello(int x, int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			printf("Hello! ");
		}

		printf("\n");
	}
}

/// AUFGABE 2
void A2(void)
{
	int i;
	scanf("%d", &i);
	printf("C To F > %d\n", CToF(i));
	printf("F To C > %d\n", FToC(i));
}

int CToF(int i)
{
	return i * 9 / 5 + 32;
}

int FToC(int i)
{
	return (i - 32) * 5 / 9;
}

/// AUFGABE 3

void A3(void)
{
	srand(time(NULL));
	int n = rand() % 30;

	printf("Erraten Sie eine Zahl von 1 bis 30? (5 Versuche)\n");
	for (int i = 0; i < 5; i++)
	{
		int t;
		printf("Versuch > ");
		scanf("%d", &t);
		fflush(stdin);

		if (t == n)
		{
			printf("Richtig! Sie haben die Zahl erraten, gratuliere!");
			return;
		}
		else if (t < n)
		{
			printf("Falsch! Zahl ist hoeher!\n");
		}
		else if (t > n)
		{
			printf("Falsch! Zahl ist tiefer!\n");
		}
	}

	printf("Zahl nicht erraten!\nDie Zahl waere %d", n);
}

/// AUFGABE 4

void A4(void)
{
	char c;
	printf("Ermittlung des ASCII-Codes eines Zeichens\nGeben Sie einen Buchstaben ein > ");
	scanf("%c", &c);
	printf("Der ASCII-Code von %c lautet: %d", c, c);
}

void A4_2(void)
{
	int c;
	printf("Ermittlung des Zeichens eines ASCII-Codes\n");
	do
	{
		printf("Geben Sie einen ASCII-Code ein > ");
		scanf("%d", &c);
		fflush(stdin);
	} while (c > 127);
	printf("Das Zeichen von %d lautet: %c", c, c);
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