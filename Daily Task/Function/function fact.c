#include<stdio.h>
int fact();
 
main(){
	
	int a;
	
	a=fact();
	
	
	printf("FACTORIAL OF GIVEN NUMBER: %d",a);
	
}
int fact(){
	int n, i, factorial=1;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	factorial=factorial*i;
	}
	
	
	return factorial;
	
}
