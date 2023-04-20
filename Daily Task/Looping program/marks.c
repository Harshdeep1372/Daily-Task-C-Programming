#include<stdio.h.>
main()
{
	int marks;
	
	printf("ENTER THE OBTAIN MARKS:");
	scanf("%d",&marks);
	 
	 if(marks>80 && marks<=100)
	 {
	 	printf("GRADE A: %d",marks);
	 }
	 else if(marks>60 && marks<=80)
	 {
	 	printf("GRADE B: %d",marks);
	 }
	 else if(marks>35 && marks<=60)
	 {
	 	printf("GRADE C: %d",marks);
	 }
	 else
	 {
	 	printf("FAIL");
	 }
	 
}
