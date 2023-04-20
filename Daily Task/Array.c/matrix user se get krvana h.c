#include <stdio.h>

void main()
{
  int a[10][10];
  int i,j,r,c;
  printf("enter the number of row=");

scanf("%d",&r);

printf("enter the number of column=");

scanf("%d",&c);
       
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&a[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<r;i++)
  {
      printf("\n");
      for(j=0;j<c;j++)
           printf("%d\t",a[i][j]);
  }
 printf("\n\n");
}
