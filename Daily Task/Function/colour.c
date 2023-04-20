#include<stdio.h>
char display();
 
main(){
	char c;
	c = display();

    if(c=='g')
	{
    	printf("\nColor is green");
	}
	else if(c=='r')
	{
		printf("\nColor is red");	
	}
	else if(c=='b')
	{
		printf("\nColor is blue");	
	}
	else
	{
		printf("\nColor is invalid");
	}

	
}
char display(){
	 char color;
	
	printf("Enter the valuve of color= ");
	scanf("%c",&color);
	
	return color;
	
}
