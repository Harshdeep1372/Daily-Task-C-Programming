#include<stdio.h>
main()
{
    int i,j,rows,alpha;
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    alpha=64;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",alpha+i);

        }
        printf("\n");
    }
}
