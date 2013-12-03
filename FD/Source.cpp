#include <stdio.h>

int main(void)
{
	bool cont = false;
	do
	{
		printf("Berechnung der Anzahl Waescheklammern\n\n");

		int i;

		do
		{
			printf("Wieviele T-Shirts haben Sie gewaschen? > ");
			scanf("%d", &i);
			fflush(stdin);

			if (i > 60)
				printf("Achtung! Soviele haben gar nicht im Trocknungsraum Platz!\n");
		} while (i > 60 || i <= 0);
		
		int klammern;
		if (i % 6 == 0)
			klammern = i + (i / 6);
		else
			klammern = i + (i / 6) + 1;


		printf("\nFuer %d Shirts braucht Sie %d Waescheklammern.\n", i, klammern);

		printf("Noch eine Berechnung? (j/n) ");
		char c;
		scanf("%c", &c);
		if (c == 'j')
			cont = true;
		else
			cont = false;
	} while (cont);
}