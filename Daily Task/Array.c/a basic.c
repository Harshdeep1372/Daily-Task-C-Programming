#include<stdio.h>
main()
{
	int myarray[5]={34,34,56,5,34}; 
	int a[3]={20,45,68};    //initialization
	int b[4],sum=0; //declatation
	
	b[0]=56;
	b[1]=45;
	b[2]=85; //assigning value to array
	
	printf("%d %d %d",myarray[2],myarray[4],myarray[1]);   //accesing
	
	sum=b[0]+b[1]+b[2];
	printf("\n %d",sum);
}
