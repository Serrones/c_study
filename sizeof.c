/*
To get the exact size of a type or a variable on a particular platform,
you can use the sizeof operator. The expressions sizeof(type) yields the
storage size of the object or type in bytes
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("INT\n");
    printf("Storage size for INT is %zu bytes\n", sizeof(int));
    printf(
        "Storage size for USIGNED INT is %zu bytes\n",
        sizeof(unsigned int)
    );
    printf("-------------------------------------------\n");

    printf("FLOAT\n");
    printf("Storage size for FLOAT is %zu bytes\n", sizeof(float));
    printf("-------------------------------------------\n");

    printf("DOUBLE\n");
    printf("Storage size for DOUBLE is %zu bytes\n", sizeof(double));
    printf("Storage size for LONG DOUBLE is %zu bytes\n", sizeof(long double));
    printf("-------------------------------------------\n");
    
    printf("SHORT / LONG\n");
    printf("Storage size for SHORT is %zu bytes\n", sizeof(short));
    printf("Storage size for LONG is %zu bytes\n", sizeof(long));
    printf("Storage size for LONG LONG is %zu bytes\n", sizeof(long long));
    printf(
        "Storage size for USIGNED SHORT is %zu bytes\n",
        sizeof(unsigned short)
    );
    printf(
        "Storage size for USIGNED LONG is %zu bytes\n",
        sizeof(unsigned long)
    );
    printf("Storage size for USIGNED LONG LONG is %zu bytes\n",
            sizeof(unsigned long long));
    printf("-------------------------------------------\n");

    printf("CHAR\n");
    printf("Storage size for CHAR is %zu byte\n", sizeof(char));
    printf(
        "Storage size for USIGNED CHAR is %zu byte\n",
        sizeof(unsigned char)
    );
    printf("-------------------------------------------\n");

    return 0;
}