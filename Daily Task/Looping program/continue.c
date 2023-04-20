#include<stdio.h>
main()
{
	int i;
	for(i=0;i<11;i++)
	{
		if((i==4)||(i==7)||(i==9))
		continue;
		printf("\nVALUE OF I=%d",i);
	}
}
