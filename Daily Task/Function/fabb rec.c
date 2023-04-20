#include<stdio.h>
int fabb(int n);
main()
{
	int n, d;
printf("ENTER NUMBER:");
	scanf("%d",&n);
	d=fabb(n);	


}

int fabb(int n)
{
	int i, a=0, b=1, c;
	
	
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
