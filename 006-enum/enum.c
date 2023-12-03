#include <stdlib.h>
#include <stdio.h>

int main() {
    
    
    // FORMAT SPECIFIERS
    // ENUM
    // enum = %d

    enum menu
    {
        TEA,
        COFFE,
        BEER,
        SODA,
        WINE,
        WATER
    };

    enum menu order1 = COFFE;
    enum menu order2 = SODA;
    enum menu order3 = WATER;

    printf("order1 = %d\n", order1);
    printf("order2 = %d\n", order2);
    printf("order3 = %d\n", order3);

    return 0;
}