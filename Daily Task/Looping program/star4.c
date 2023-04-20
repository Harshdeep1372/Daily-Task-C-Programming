#include<stdio.h>
main()
{
	
	int i,j,k,num,count;
	printf("THE VALUE OF ROWS:");
	scanf("%d",&num);
	
	count=num-1;
	
	for(i=num;i>=1;i++)
	{
		
		for(k=1;k<=count;k++)
		
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		
	
	printf("\n");
	count++;	
	}
}
