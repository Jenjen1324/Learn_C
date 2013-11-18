#include <stdio.h>

int main(void)
{
	char c;

	

	do {
	printf("Bitte geschlecht eingeben (m/w)");
	scanf("%c",&c);
	printf("Ungültige eingabe!\n");
	} while(!(c=='m' || c=='w'));

	printf("\n\nGültige eingabe!");

	printf("Ende");
}