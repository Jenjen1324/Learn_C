#include <stdio.h>

int main(void)
{

	int k = 1e5;
	printf("%d",k);

    int m,n,result,i;
    result = 0;
	printf("Kleinere Zahl eingeben: ");
    scanf("%d",&m);
	printf("Grössere Zahl eingeben: ");
    scanf("%d",&n);

    for(i = m;i <= n;i++)
    {
        result = result + i;
    }
	printf("Summe aller dazwischenliegenden Zahlen: %d",result);
    return 0;
}