#include <stdlib.h>
#include <stdio.h>


int adder(int n1, int n2) {
    return n1 + n2;
}

void printer(char * str) {
    printf("%s\n\n", str);
}

void copyByValue(int x) {
    x++;
    printf("num = %d\n", x);
}

void copyByReference(int *x) {
    (*x)++;
    printf("num = %d\n", *x);
}

int main() {

    int x = 7;
    char *str = "hello world\n";

    printf("%d\n", adder(1, 2));
    printf("%s\n", str);
    printer(str);

    printf("before = %d\n", x);
    copyByValue(x);
    printf("after = %d\n\n", x);

    printf("before = %d\n", x);
    copyByReference(&x);
    printf("after = %d\n\n", x);

    return 0;
}