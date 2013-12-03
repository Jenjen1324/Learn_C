#include <stdio.h>

int PromptInt(char *msg, int min, int max)
{
	int r;
	do
	{
		printf(msg);
		scanf("%d", &r);
		fflush(stdin);
	} while (r < min || r > max);

	return r;
}