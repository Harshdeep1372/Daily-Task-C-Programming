#include<stdio.h>
main()
{
	int a[5][5] = 
	{{8,7,4,5,4},
	{5,4,2,3,4},
	{0,10,21,45,45},
	{7,8,5,44,66},
	{4,4,4,5,47}};
	
	int i, j;
	
	int sum=0;
	printf("ROW TOTAL=");
	
	for(i=0; i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum+=a[i][j];
		}
		printf("%d ",sum);
		sum=0;
	}
	printf("\nColoum TOTAL=");
	
	for(j=0; j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			sum+=a[i][j];
		}
		printf("%d ",sum);
		sum=0;
	}
	
	
	
	
	
	
	
	
	
}
