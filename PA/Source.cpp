/*######################################################################
#
# Programmname: Source.cpp
# Beschreibung: Aufgaben der Kompetenz PA
#
# Version:      1.0
# Erstellt am:  03.12.2013
# Autor:        Jens Vogler
# Copyright:    Jens Vogler 2013
#
# Aenderungen
# 2013-12-03    vn  V1.0    Erstellung des Programms
#
######################################################################*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Header.h"

void A1(void);
void A3(void);
void A4(void);

int main(void)
{
	A4();

	printf("\n\n\nProgramm Ende! Enter Druecken...");
	fflush(stdin);
	getc(stdin);

	return 0;
}




/// AUFGABE 1&2
void A1(void)
{
	// Variabeln Deklarieren
	char c;
	char *msg_g = "Groesste Zahl: %d\n";
	char *msg_m = "Zweitgroesste Zahl: %d\n";
	char *msg_s = "Kleinste Zahl: %d\n";

	printf("Drei Zahlen der Gr�sse nach ordnen");
	do
	{
		printf("\n\n");

		// Variabeln Deklarieren
		int i1, i2, i3;
		int r1, r2, r3;

		// Variabeln Initialisieren
		i1 = PromptInt("Eingabe Zahl 1 > ", -500, 500);
		i2 = PromptInt("Eingabe Zahl 2 > ", -500, 500);
		i3 = PromptInt("Eingabe Zahl 3 > ", -500, 500);
		printf("\n");

		// Berechnung und Ausgabe
		if (i1 > i2 && i1 > i3)
		{
			r1 = i1;
			if (i2 > i3)
			{
				r2 = i2;
				r3 = i3;
			}
			else
			{
				r2 = i3;
				r3 = i2;
			}
		}
		else if (i2 > i1 && i2 > i3)
		{
			r1 = i2;
			if (i1 > i3)
			{
				r2 = i1;
				r3 = i3;
			}
			else
			{
				r2 = i3;
				r3 = i1;
			}
		}
		else if (i3 > i1 && i3 > i2)
		{
			r1 = i3;
			if (i1 > i2)
			{
				r2 = i1;
				r3 = i2;
			}
			else
			{
				r2 = i2;
				r3 = i1;
			}
		}
		

		// Ausgabe der Nachricht
		printf("aUfsteigend/aBsteigend? (u/b) ");
		scanf("%c", &c);
		fflush(stdin);
		if (c != 'u')
		{
			printf(msg_g, r1);
			printf(msg_m, r2);
			printf(msg_s, r3);
		}
		else
		{
			printf(msg_s, r3);
			printf(msg_m, r2);
			printf(msg_g, r1);
		}

		printf("\n\nNoch einmal? (j/n) ");
		scanf("%c", &c);
		fflush(stdin);
	} while (c == 'j');
}

/// AUFGABE 3
void A3(void)
{
	// Variabeln deklaration
	const int pinCode = 1234;
	int kapital = 450;
	int input = 0;
	bool main;

	// PIN Eingabe
	for (int i = 1; input != pinCode; i++)
	{
		printf("Geben sie Ihren Pincode ein (%d. Versuch) > ", i);
		scanf("%d", &input);
		fflush(stdin);
		if (i > 3)
		{
			printf("\nDrei mal Falsch eigegeben");
			return;
		}
	}
	do
	{
		// Hauptmenue
		main = true;
		printf("Hauptmenue\n1) Ausloggen\n2) Kontostand anschauen\n3) Geld abheben\nAuswahl ? > ");
		scanf("%d", &input);
		fflush(stdin);

		// Auswahl
		switch (input)
		{
		case 1:
			// Ausloggen
			main = false;
			break;
		case 2:
			// Kontostand abrufen
			printf("Kontostand: %d\n\n", kapital);
			break;
		case 3:
			// Abheben
			bool cont;
			do
			{
				printf("\n\nWie viel m�chten sie abheben? > ");
				scanf("%d", &input);

				cont = true;
				// Kontrollieren ob die eingabe richtig war
				if (input <= kapital)
				{
					if (input % 100 == 0)
					{
						// Abheben
						printf("Ausgabe %d\n", input);
						kapital -= input;
						printf("(Es verbleiben CHF %d auf dem Konto.)\n", kapital);
						cont = false;
						main = false;
					}
					else
					{
						printf("Achtung: Nur 100er Noten verf�gbar.");
					}
				}
				else
				{
					printf("Achting: Nicht genug Guthaben");
				}
			} while (cont); // Bis man eine Eingabe richtig gemacht hat
			break;
		}
	} while (main);
	printf("Einen sch�nen Tag noch");
}



/// AUFGABE 4
void A4(void)
{
	// Variabel deklarieren
	int a[100];
	// Zuf�llige Zahlen initialisieren
	srand(time(NULL));

	// Zuf�llige Zahlen generieren
	for (int i = 0; i < 100; i++)
	{
		a[i] = rand() % 1000;
	}

	// Zuf�llige Zahlen ausgeben
	for (int i = 0; i < 100; i++)
	{
		printf("%d ",a[i]);
	}

	// Sortieren
	int i, j, n = 100, temp;
	for (i = 0; i<n; i++)
	{
		for (j = i + 1; j<n; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	// Sortierte Zahlen ausgeben
	printf("\n\n");
	for (int i = 0; i < 100; i++)
	{
		printf("%d ", a[i]);
	}
}