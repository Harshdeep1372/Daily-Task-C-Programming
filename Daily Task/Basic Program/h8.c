#include <stdio.h>


void starpatter(int n) 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for ( int i = 0; i<a; i++) 
	{
		printf("%c",'*'); 
	}

} 
 
