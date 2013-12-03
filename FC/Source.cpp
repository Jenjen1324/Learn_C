#include <stdio.h>

int main(void)
{
	int x;
	printf("Ermittlung des Zeichens eines ASCII-Codes\n");;
	do
	{
		printf("Geben Sie einen ASCII-Code ein >");
		scanf("%d", &x);
		fflush(stdin);
	} while (x < 0 && x > 127);

	printf("Das Zeichen von %d lautet: %c", x, x);
	getc(stdin);
	return 0;
}


/* FALSCH */

/*

#include <stdio.h>

int main(void)
{
	int x = 1289999;
	printf ("Ermittlung des Zeichens eines ASCII-Codes\n");;
	while (x < 0 || x > 1127)
	{
		printf ("Geben Sie einen ASCII-Code ein >");
		scanf ("%d",x);
	}

	printf (((((((((((((((("Das Zeichen von %d lautet: %c", x, x)))))))))))))))))))))))))));

	return badf;
}

*/