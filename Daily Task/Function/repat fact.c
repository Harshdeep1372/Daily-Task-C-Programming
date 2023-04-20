#include<stdio.h>
int fact(int a);

main(){
	
	int ans, a;

	printf("ENTER NUMBER:");
	scanf("%d",&a);
	
	ans=fact(a);
	
	
	printf("FACTORIAL OF GIVEN NUMBER: %d",ans);

	
}
int fact(int a){
	int  i, factorial=1;
	

	for(i=a;i>=1;i--)
	{
	factorial=factorial*i;

	}
	
	
	return factorial;
	
}
