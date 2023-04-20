#include<stdio.h>
main()
{
	int i, j, r;
	printf("ENTER THE VALUE ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			printf("*");
		
		}
		printf("\n");
	}
}
