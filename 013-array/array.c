#include <stdlib.h>
#include <stdio.h>

int main() {

    int LEN = 5;
    int a[5];

    printf("initalized a[5]\n");
    for (int x = 0; x < LEN; x++)
    {
        printf("%d\n", a[x]);
    }
    printf("\n");



    printf("set a[5]\n");
    for (int x = 1; x <= 5; x++)
    {
        a[x - 1] = x;
    }
    printf("\n");



    printf("looping a[5]\n");
    int len = sizeof(a) / sizeof(a[0]);
    for (int x = 0; x < len; x++) {
        printf("%d\n", a[x]);
    }
    printf("\n");

    return 0;
}