#include <stdio.h>

void main()
{
    int a[3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    printf("\n\n");
}
