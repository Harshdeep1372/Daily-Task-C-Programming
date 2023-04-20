#include<stdio.h>
main()
{
	int i, j, n;
	printf("ENTER THE VALUE ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j%2);
		
		}
		printf("\n");
	}
}

