#include<stdio.h>
main()
{
	int i, j, r, k;
	printf("ENTER THE VALUE ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(k=1;k<=r-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		
		}
		printf("\n");
	}
}


