#include <stdio.h>

int main(void)
{
	float summe = 0;
	float betrag, preis;

	printf("Gib deinen Gutschein ein > ");
	scanf("%f", &betrag);
	fflush(stdin);

	if (betrag > 0)
	{
		printf("Gib den Preis des Artikels ein (0=Ende) > ");
		scanf("%f", &preis);
		fflush(stdin);

		while (preis > 0 && summe + preis <= betrag)
		{
			summe += preis;
			printf("Summe aller Artikel: %f\n", summe);
			printf("Gib den Preis des Artikels ein (0=Ende) > ");
			scanf("%f", &preis);
			fflush(stdin);
		}

		printf("Gutschein aufgebraucht\nTotal Einkauf: %f", summe);
	} 
	else
	{
		printf("Der Betrag ist zu klein um einzukaufen");
	}

	getc(stdin);
}