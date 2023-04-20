#include <stdio.h>

void main()
{
  int a[10][10];
   int b[10][10];
   int c[10][10];
  int i,j,r,k;
  printf("enter the number of row=");

scanf("%d",&r);

printf("enter the number of column=");

scanf("%d",&k);
       
  for(i=0;i<r;i++)
  {
      for(j=0;j<k;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&a[i][j]);
      }
  }
   for(i=0;i<r;i++)
  {
      for(j=0;j<k;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&b[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<r;i++)
  {
      printf("\n");
      for(j=0;j<k;j++)
           printf("%d\t",c[i][j]=a[i][j]*b[i][j]);
  }
 printf("\n\n");
}
