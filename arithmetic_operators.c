#include <stdio.h>

int main()
{
    int a = 21;
    int b = 10;
    int c ;
    
    c = a + b;
    printf("c = a + b\n");
    printf("Line 1 - Value of c is %d\n", c );
    printf("-------------------------\n");
    
    c = a - b;
    printf("c = a - b\n");
    printf("Line 2 - Value of c is %d\n", c );
    printf("-------------------------\n");

    c = a * b;
    printf("c = a * b\n");
    printf("Line 3 - Value of c is %d\n", c );
    printf("-------------------------\n");

    c = a / b;
    printf("c = a / b\n");
    printf("Line 4 - Value of c is %d\n", c );
    printf("-------------------------\n");

    c = a % b;
    printf("c = a %% b\n");
    printf("Line 5 - Value of c is %d\n", c );
    printf("-------------------------\n");

    c = ++a;
    printf("c = a++\n");
    printf("Line 6 - Value of c is %d\n", c );
    printf("-------------------------\n");

    c = --a;
    printf("c = a--\n");
    printf("Line 7 - Value of c is %d\n", c );
    printf("-------------------------\n");
}