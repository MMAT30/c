#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {


    // declaring strings
    char *str = "Hello World";
    char str2[12] = "Hello World";

    printf("%s, size: %lu\n", str, sizeof(str));
    printf("%s, size: %lu\n", str2, sizeof(str2));

    return 0;
}