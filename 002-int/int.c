
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

int main()
{


    // TODO: format this code to show the limits of the numeric data types

    // FORMAT SPECIFIERS
    // SHORT
    // unsigned short int = %hu - (2 bytes) (16 bits)
    // signed short int = %hi - (2 bytes) (16 bits)
    // short int = %hi - (2 bytes) (16 bits)

    // unsigned short short int = %hhu - (1 byte) (8 bits)
    // signed short short int = %hhi - (1 byte) (8 bits)
    // short short int = %hhi - (1 byte) (8 bits)

    unsigned short int a1 = 1;
    // alternative typedef
    uint8_t a2 = 1;

    printf("unsigned short int a1 = %hu;\n", a1);
    printf("uint8_t a2 = %hu;\n", a2);
    printf("%hi\n", UINT8_MAX);

    // INT
    // unsigned int = %u - (4 bytes) (32 bits)
    // signed int = %i - (4 bytes) (32 bits)
    // int = %i - (4 bytes) (32 bits)

    // LONG
    // unsigned long int = %lu - (8 bytes) (64 bits)
    // signed long int = %li - (8 bytes) (64 bits)
    // long int = %li - (8 bytes) (64 bits)

    // unsigned long long int = %llu - (8 bytes) (64 bits)
    // signed long long int = %lli - (8 bytes) (64 bits)
    // long long int = %lli - (8 bytes) (64 bits)

    // int a = 1;
    // unsigned int b = 2;
    // short int c = 3;
    // unsigned short int d = 4;
    // long int e = 5;
    // unsigned long int f = 6;
    // long long int g = 7;
    // unsigned long long int h = 8;

    // INT
    // LONG
    // FLOAT
    // DOUBLE

    return 0;
}