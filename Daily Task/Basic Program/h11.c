/*Quick Quiz: Write a program with three functions,

Good morning function which prints "Good Morning."
Good afternoon function which prints "Good Afternoon."
Good night function, which prints "Good night."
main() should call all of these in order 1 - 2 - 3.*/

#include <stdio.h>
void good_morning(); // Function prototype
void good_afternoon();
void good_night();
int main()
{
    int a;
    good_morning();
    good_afternoon();
    good_night();
    printf("Task finish\t\n"); // Function call
    return 0;
}

void good_morning()
{ // Function definition
    printf ( "Good Morningn\n" );
}
void good_afternoon()
{ // Function definition
    printf ( "Good Afternoon\n" );
}

void good_night()
{ // Function definition
    printf ( "Good night\n\n" );
}