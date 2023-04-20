#include<stdio.h>
void printMyValue(int a, float b, char c);
main()
{
	printMyValue(10,'x',4.5);
}
void printMyValue(int a, float b, char c)
{
	printf("\n interger value %d",a);
		printf("\n float value %d",b);
			printf("\n character value %c",c);
	
}
