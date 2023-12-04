#include <stdio.h>
#include <stdlib.h>


// int main(int argc - (count of args passed in), char * argv [] - (args in a array))
int main(int argc, char * argv [] ) {

    printf("argc = %d\n", argc);


    for (int x = 0; x < argc; x++)
    {
        printf("argv[%d] = %s\n", x, argv[x]);
    }

    return 0;
}