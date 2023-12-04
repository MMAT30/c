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

    // break - continue
    while (i == 1) {
        printf("break\n");
        break;
    }


    for (int i = 0; i < 3; i++)
    {
        printf("continue\n");
        continue;

        printf("made it here - 1\n");

        printf("made it here - 2\n");

        printf("made it here - 3\n");
    }

    

    // switch - case - default
    switch (i)
    {
    case 0:
        printf("case 0\n");
        break;

    case 1:
        printf("case 1\n");
        break;

    default:
        printf("default\n");
        break;
    }




    return 0;
}