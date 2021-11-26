/*
You can use const prefix to declare constants with a specific type as follows
*/

#include <stdio.h>


int main()
{
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;

    area = LENGTH * WIDTH;
    printf("Value of Area : %d", area);
    printf("%c", NEWLINE);
    printf("-------------------------");
    printf("%c", NEWLINE);

    return 0;
}