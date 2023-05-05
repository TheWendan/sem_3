#include <stdio.h>
#include "32.h"


int length(char s[]) //длина строки
{
    int len =0;
    for(int i = 0; s[i] != '\0'; i++)
        len++;
    return len;   
}


void dell(char s1[], char s2[])
{
    int len_s2 = 0; int len_s1 = 0; int count = 0; 
    /*for(int i = 0; s2[i] != '\0'; i++)
        len_s2++; 
    for(int i = 0; s1[i] != '\0'; i++)
        len_s1++; */
    len_s1 = length(s1);
    len_s2 = length(s2);

    for(int i = 0; i <= len_s1 - 1; i++)
    {
        for(int j = 0; j <= len_s2 - 1;j++)
        {
            if(s1[j + i] == s2[j])
                count++;
        }
        if(count == len_s2)
        {
            for(int j = 0; j <= len_s2 - 1;j++)
                s1[j + i] = ']';
        }
        count = 0;
    }
    for(int i = 0; i <= len_s1 -1; i++)
        if(s1[i] != ']')
            putchar(s1[i]);   
}


void scan(char x[])
{
    char c; short i = 0;
    while((c = getchar()) != '\n')
    {
        x[i] = c; 
        i++;
    }
}