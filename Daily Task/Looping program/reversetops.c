#include <stdio.h>

main()

{
    int n,r,rev=0,i;

    printf("Input a number: ");
    scanf("%d",&n);
    

    for(i=0;n!=0;i++)
	
	{
		 
         r=n % 10;
         rev=rev*10+r;
         n=n/10;
    }
    
    
		printf("The number in reverse order is : %d \n",rev);
}
