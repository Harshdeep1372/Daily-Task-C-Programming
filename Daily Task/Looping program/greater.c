#include<stdio.h.>
main()
{
	int a, b,c;
	
	printf("ENTER THE VALUE OF A:");
	scanf("%d",&a);
	
	printf("ENTER THE VALUE OF B:");
	scanf("%d",&b);
	
	printf("ENTER THE VALUE OF C:");
	scanf("%d",&c);
	 
	if (a>b)
	{
		if (a>c)
		{
		    printf("A IS GREATER");	
		}
		else 
		{
			printf("C IS GREATER");
		}
	 } 
	 else 
	 {
	 	if (b>c)
	 	{
	 		printf("B IS GREATER");
		}
		else
		{
			printf("c IS GREATER");
		}
	 }
}
