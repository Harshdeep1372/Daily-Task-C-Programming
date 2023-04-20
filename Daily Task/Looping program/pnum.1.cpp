#include<stdio.h>
main()
{
	int i, j, r;
	printf("ENTER THE VALUE ");
	scanf("%d",&r);
	for(i=r;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		
		}
		printf("\n");
	}
}
