// call by refrence
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void changeValue(int *address)
{
    *address = 37565;
}

int main()
{
    int i, r = 10, v = 20;
    printf("\nValue of r: %d", r);
    printf("\nValue of v: %d", v);
    swap(&r, &v); // passing value to function
    printf("\nValue of r: %d", r);
    printf("\nValue of v: %d", v);
    printf("\nenter the value: \n");
    scanf("%d", i);
    if (i == 2)
    {
        int a = 34, b = 56;
        printf("The value of a now is %d\n", a);
        changeValue(&a);
        printf("The value of a now is %d\n", a);
    }
    else
    {
       printf("harsh");
    }

    return 0;
}
