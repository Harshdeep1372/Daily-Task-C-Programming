#include<stdio.h>
main()
{
	int i=0,sum=0,n;
	
	printf("ENTER NUMBER: ");
	scanf("%d",&n);
	
	lable:
		i++;
		sum+=i;
		
		if(i<n)
		goto lable;
		
		printf(" SUM :%d",sum);
	
}
