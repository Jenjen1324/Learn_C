#include <stdio.h>

int main(void)
{
	char c;

	

	do {
	printf("Bitte geschlecht eingeben (m/w)");
	scanf("%c",&c);
	printf("Ung�ltige eingabe!\n");
	} while(!(c=='m' || c=='w'));

	printf("\n\nG�ltige eingabe!");

	printf("Ende");
}