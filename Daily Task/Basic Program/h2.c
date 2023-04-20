#include <stdio.h>
int main()

{
    int a;
    printf("enter how many subject you passad\n");
    printf("enter 1 if you passed math\n");
    printf("enter 2 if you passed science\n");
    printf("enter 3 if you passed both\n");

    scanf("%d",&a);
    if (a==3)
        {
        printf("cong. You win Rs.45");
        }
    else if (a==2||a==1)
        {
        printf("cong. You won Rs. 15");
        }
    else
        {
            printf("sorry can't won");
        }
    return 0;
}