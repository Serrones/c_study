/*
Following is the form to use #define preprocessor to define a constant
*/

#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area;

    area = LENGTH * WIDTH;
    printf("Value of Area : %d", area);
    printf("%c", NEWLINE);
    printf("-------------------%c", NEWLINE);
    
    return 0;
}