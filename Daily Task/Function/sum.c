#include<stdio.h>
int sumoftwo();
 
main(){
	int ans,d;
	ans = sumoftwo();

	printf("the ans is %d",ans+10);
	
}
int sumoftwo(){
	int a, b, c=0;
	
	printf("Enter the valuve of a");
	scanf("%d",&a);
	
	printf("Enter the valuve of b");
	scanf("%d",&b);
	
	c=a+b;
	
	return c;
	
}
