#include<stdio.h>
int fabb();
main()
{
	int  d;
   
	d=fabb();	


}

int fabb()
{
	int i, a=0, b=1, c,n;
	printf("ENTER NUMBER:");
	scanf("%d",&n); 
	
	printf("The series is:\n");	
	 

		for(i=1;i<=n;i++)
		{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	
		}
	
return n;
}
