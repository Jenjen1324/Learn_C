#include <stdio.h>

int A1(void);
int A2(void);

int main(void)
{
	int x = 1;
	int y;
	y = x++;
	y += x -= x;
	printf("%d|%d", x, y);
	//A2();
	getc(stdin);
	return 0;
}


#pragma region Aufgabe 1

int ggT(int, int, int);

int A1(void)
{
	int a, b, c, s;
	bool invalid;

	printf("Berechnung des ggT von 3 Zahlen\n");

	invalid = true;
	do
	{
		printf("Zahl 1 (>0) eingeben> ");
		scanf("%d", &a);
		fflush(stdin);
		if (a > 0)
			invalid = false;
		else
			printf("Ungültige eingabe!\n");
	} while (invalid);

	invalid = true;
	do
	{
		printf("Zahl 2 (>0) eingeben> ");
		scanf("%d", &b);
		fflush(stdin);
		if (b > 0)
			invalid = false;
		else
			printf("Ungültige eingabe!\n");
	} while (invalid);

	invalid = true;
	do
	{
		printf("Zahl 3 (>0) eingeben> ");
		scanf("%d", &c);
		fflush(stdin);
		if (c > 0)
			invalid = false;
		else
			printf("Ungültige eingabe!\n");
	} while (invalid);

	s = ggT(a, b, c);

	printf("ggT von %d,%d,%d ist %d", a, b, c, s);

	return 0;
}

int ggT(int a, int b, int c)
{
	int r;
	int i = 0;
	while (i <= 1)
	{
		i++;
		do {
			r = a % b;
			a = b;
			b = r;
		} while (r != 0);
		b = c;
	}
	return a;
}

#pragma endregion

#pragma region Aufgabe 2

int A2(void)
{
	int l;
	float ks, p;
	printf("Kontostand > ");
	scanf("%f", &ks);
	fflush(stdin);
	printf("Laufzeit > ");
	scanf("%d", &l);
	fflush(stdin);
	printf("Zinsfuss > ");
	scanf("%f", &p);
	fflush(stdin);

	printf("\nJahre\tGuthaben\n-----------------------------------------\n");

	for (int i = 0; i <= l; i++)
	{
		printf("%d\t%f\n", i, ks);
		ks = ks + ks*p / 100.;
	}

	return 0;
}

#pragma endregion