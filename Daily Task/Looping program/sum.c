#include<stdio.h>
main()
{
	int i, n, sum=0;
	
		printf("ENTER VALUE :");
		scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{	
		sum=n*(n+1)/2;
	}
		printf("\nSUM OF %d IS = %d",n,sum);
}
