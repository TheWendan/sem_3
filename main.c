#include <stdio.h>
#include <stdlib.h>
#include "31.h"
#define LEN 25

int main()
{
    char s_inp[LEN] = {'0'};
    unsigned int s_len;
    printf("Confines: ");
    scanf("%s", s_inp);
    s_len = length(s_inp);
    if(s_inp[0] == '-')
        putchar('-');
    reverse(s_inp, s_len);
    if(s_inp[s_len -1] == '-')
        putchar('-');   
    return 0;
}