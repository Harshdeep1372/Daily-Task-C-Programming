#include <stdio.h>
main()
{
    int i, a[50], temp, j;

    printf("Enter any 10 num in array = \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\nData before sorting  = ");
    for (j = 0; j < 10; j++)
    {
        printf("  %d", a[j]);
    }
    for (i = 0; i <=10; i++)
    {
        for (j = 0; j <=10 - i; j++)
        {
            
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("\n\n\nData after sorting Ascending order    = ");
    for (j = 0; j < 10; j++)
    {
        printf("  %d", a[j + 1]);
    }
    
    printf("\n\n\nData after sorting Decending Order   : ");
 	for(j=9;j>=0 ;j--)
	{
 		 printf("  %d", a[j+1]);
  	}
    return (a[j + 1]);
}
