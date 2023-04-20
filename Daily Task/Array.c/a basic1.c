#include<stdio.h>
main(){
	
	
	int a[10], i, counteven=0,countodd=0,sumeven=0,sumodd=00;

	
	
		for (i=0;i<10;i++)
		
		{
			printf("enter your values a[%d]=", i);
			scanf("%d", &a[i]);
			
		}
		printf("\n");
		for (i=0;i<10;i++)
		
		{
			if (a[i]%2==0)
			{
				counteven++;
				sumeven=sumeven+a[i];
				printf("\n%d even",a[i]);
			}
			else 
			{
				countodd++;
				sumodd=sumodd+a[i];
				printf("\n%d odd",a[i]);
			}
			
		}
	printf("\ntotal even number is: %d\n",counteven);
	printf("total odd number is: %d\n",countodd);
	printf("sum even number is: %d\n",sumeven);
	printf("sum odd number is: %d\n",sumodd);
}

