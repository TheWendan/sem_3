#include <stdio.h>
#include "33.h"


int main()
{
    char c;
    int rank[10] = {0};
    while((c = getchar()) != '\n')
        if ((c >= 48) && (c <= 57))
            rank[c - 48]++;
    vert_diag(rank);
    putchar('\n');
    putchar('\n');
    hor_diag(rank);
    return 0;
}

