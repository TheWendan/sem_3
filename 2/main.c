#include <stdio.h>
#include "32.h"

int main(void){
    char s1[25] = {'0'}, s2[25] = {'0'};
    printf("s1: ");
    scan(s1);
    printf("s2: ");
    scan(s2);
    dell(s1, s2);
    return 0;
}
