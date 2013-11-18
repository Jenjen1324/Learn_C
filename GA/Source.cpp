#include <stdio.h>
#include <windows.h>

//// Aufgabe 2&3
//int main(void)
//{
//	int i,j;
//	printf("Erste Zahl eingeben: ");
//	scanf("%d",&i);
//	printf("Zweite Zahl eingeben: ");
//	scanf("%d",&j);
//
//	printf("\n\nEingegebene Zahlen: %d und %d\n\n",i,j);
//	printf("Die grössere Zahl ist: ");
//	if(i < j)
//		printf("%d",j);
//	else
//		printf("%d",i);
//
//	return 0;
//}

//// Aufgabe 4
//int main(void)
//{
//	int i = 1;
//	while(i <= 10)
//	{
//		printf("Zeile %d\n",i);
//		i++;
//	}
//
//	return 0;
//}

//int main(void)
//{
//	for(int i = 1; i <= 10; i++)
//	{
//		printf("Zeile %d\n",i);
//	}
//}

//// Aufgabe 5
//int main(void)
//{
//	int reihe;
//	int schritte;
//	printf("Welche Zahlenreihe möchten Sie haben? > ");
//	scanf("%d",&reihe);
//	printf("Wie viele Schritte sollen berechnet werden? > ");
//	scanf("%d",&schritte);
//
//	printf("\n%der Reihe\n---------\n",reihe);
//
//	for(int i = 1; i<=schritte;i++)
//	{
//		printf("%d\n",i*reihe);
//	}
//
//	return 0;
//}

//// Aufgabe 6
//int main(void)
//{
//	int start = 0;
//	int stop = 50;
//	int step = 10;
//
//	printf("Temperaturumrechnung\nCelsius         Farenheit\n---------------------------------\n");
//	for(start; start <= stop; start = start+step)
//	{
//		printf("%d               %d\n",start,start*9/5+32);
//	}
//}


// Aufgabe 7
int main(void)
{
	int seconds;

	printf("Countdown timer\n");
	printf("Bitte Sekunden angeben > ");
	scanf("%d",&seconds);

	while (seconds != 0)
	{
		printf("\n%d",seconds);
		Sleep(1000);
		seconds--;
	}
	printf(" (beep)\a");

	return 0;
}