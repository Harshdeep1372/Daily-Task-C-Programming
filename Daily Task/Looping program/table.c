#include<stdio.h>
main()
{
	int i, n,c;
	
		printf("ENTER VALUE :");
		scanf("%d",&n);
	
	for (i=1;i<=10;i++)
	{	
		c=n*i;
		printf("\n%d*%d=%d",n,i,c);
	}
}
