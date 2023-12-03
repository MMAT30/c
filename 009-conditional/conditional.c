#include <stdlib.h>
#include <stdio.h>

int main()
{

    int i = 1;

    // if - else if - else
    if (i == 0)
    {
        printf("if");
    }
    else if (i == 1)
    {
        printf("else if\n");
    }
    else
    {
        printf("else");
    }


    // TODO: create break and continue
    // break - continue

    // switch - case - default
    switch (i)
    {
    case 0:
        printf("case 0");
        break;

    case 1:
        printf("case 1");
        break;

    default:
        printf("default");
        break;
    }




    return 0;
}