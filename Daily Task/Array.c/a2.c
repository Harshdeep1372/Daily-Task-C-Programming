#include<stdio.h>

int main()
{

	//Two dimensional array
	int Matrice[4][5]; 
	printf("This Program will print no. from 1-9 in matrice form : \n\n");
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<5;j++)
		{
			printf("Enter no. (1-9) : ");
			scanf("%d", &Matrice[i][j]);
		}
	}
	printf("\n\n\n");
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<5;j++)
		{
			printf("%d\t", Matrice[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n So that's the matrice form of no from 1-9");
	return 0;
}
 