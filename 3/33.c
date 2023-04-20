#include <stdio.h>


void vert_diag(int x[])
{
    for(int i = 0; i <= 9;i++)
    {
        printf("%d ", i);
        for(int j = 1; j <= x[i];j++)
            putchar('#');
        putchar('\n');
    }
}


int max_number(int x[])
{
    int c_max = 0;
    for(int i = 0;i <= 9;i++)
        if(x[i] > c_max)
            c_max = x[i];
    return c_max;
}

void hor_diag(int x[])
{
    int elem_max;
    elem_max = max_number(x);
    for(int j = 0;j <= elem_max - 1;j++)
    { 
        for(int i = 0;i <= 9;i++)
        {
            if((elem_max - x[i] - j) <= 0)
                printf("#");
            else
                printf(" ");
        }
        putchar('\n');
    }
    
    for(int i = 0;i < 10;i++)
        printf("%d", i);
}