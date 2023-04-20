#include<stdio.h>

main()
{
	int age;
	printf("ENTER YOUR AGE\n");
	scanf("%d",&age);
	
	switch(age)		
	{
		case 3:
			printf("THE AGE IS 3");
			break;
			
		case 13:
			printf("THE AGE IS 13");
			break;
		
		case 23:
			printf("THE AGE IS 23");
			break;	
			
		default:
			printf("invalide age");
				
	}
}
