#include<stdio.h>
main()
{
	int age;
	
	printf("ENTER THE VALUE OF age:");
	scanf("%d",&age);
	
 
	if (age>=14 )
	{
		if (age>=18)
		{
		    printf("adult");	
		}
		else 
		{
			printf("teenager");
		}
	 } 
	 else 
	 {
	 	if (age<=5  )
	 	{
	 		printf("child");
		}
		else
		{
			printf("enter valid age");
		}
	 }
}
