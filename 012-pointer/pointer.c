#include <stdlib.h>
#include <stdio.h>

int main()
{

    
    // declaring variables
    char *strPtr = NULL;
    int *intPtr = NULL;

    // creating vars that will later be pointed to
    char *str = "Hello World\n";
    int i = 65;
    int tmp = 777;

    // assigning pointers to vars
    strPtr = str;
    intPtr = &i;

    printf("%s", strPtr);
    printf("%d\n", *intPtr);

    // casting to a type
    printf("64 to ASCII(A) = %s\n", (char *)intPtr);


    



    // pointer const - the address cannot be changed but value can
    int *const p1 = &i;
    *p1 = 2;
    printf("int *const p1 = %d\n", *p1);

    // const pointer - the address can change but the value cant
    const int *p2 = &i;
    // *p2 = 123;   // error
    p2 = &tmp;
    printf("int *const p2 = %d\n", *p2);


    // const pointer const - neither value or address can be changed
    const int *const p3 = &i;
    // *p3 = 123;   // error
    // p3 = &tmp;   // error
    printf("const int *const p3 = %d\n", *p3);


    
    

    return 0;
}