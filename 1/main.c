#include <stdio.h>
#include <stdlib.h>
#include "31.h"
#define LEN 25

int main()
{
    char s_inp[LEN] = {'0'};
    unsigned int s_len;
    printf("Confines: ");
    scan(s_inp);
    s_len = length(s_inp);
    reverse(s_inp, s_len);
    return 0;
}
