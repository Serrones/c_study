/*
The extern storage class is used to give a reference of a global variable that
is visible to ALL the program files. When you use 'extern', the variable cannot
be initialized as all it does is point the variable name at a storage location
that has been previously defined.
When you have multiple files and you define a global variable or function,
which will be used in other files also, then extern will be used in another
file to give reference of defined variable or function. Just for understanding,
extern is used to declare a global variable or function in another file.
The extern modifier is most commonly used when there are two or more files sharing the
same global variables or functions.
*/

#include <stdio.h>

int count;

extern void write_extern();

int main()
{
    write_extern();
}