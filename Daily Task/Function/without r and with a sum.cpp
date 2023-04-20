#include<stdio.h>  
void sum(int a ,int  b);  
main()  
{  
		int a, b;
    printf("\nGoing to calculate the sum of two numbers:"); 
	printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);    
    sum( a, b );  
}  
void sum(int a,int b )  
{  
     
   
    printf("The sum is %d",a+b);  
}
