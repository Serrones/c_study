/*
A variable definition means to tell the compiler where and how much to create
the storage for the variable. A variable definition specifies a data type and
contains a list of one or more variables of that type
*/

#include <stdio.h>
// Variable definition:
extern int a, b;
extern int c;
extern float f;
int main ()
{
    // Variable definition:
    int a, b;
    int c;
    float f;

    // actual initialization
    a =10;
    b =20;
    c = a + b;
    f = 70.0/3.0;
    
    printf("Value of c : %d \n", c);
    printf("Value of f : %f \n", f);
    
    return 0;
}