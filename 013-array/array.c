#include <stdlib.h>
#include <stdio.h>

void looper(const int *ptr, const int len)
{
    for (int i = 0; i < len; i++)
    {
        // TODO: fix pointer arithmetic
        printf("arr[%d] = %d\n", i, *ptr);
        ptr++;
    }
}

int main() {

    int LEN = 5;
    int a[5];
    int arr[] = {1, 2, 3, 4, 5};
    int arrLen = sizeof(arr) / sizeof(arr[0]);

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

  


    // pointer arithmetic
    int *arrPtr = arr;

    looper(arrPtr, arrLen);

    return 0;
}

