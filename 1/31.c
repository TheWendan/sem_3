#include <stdio.h>
#include <stdlib.h>
//#include "31.h" Тут можно не инклудить?


int length(char s[]) //длина строки
{
    int len =0;
    for(int i = 0; s[i] != '\0'; i++)
        len++;
    return len;   
}

void reverse(char s[], int len)
{
    unsigned int code1, code2; short ii = 0;
    for(int i = 0;i <= len - 3;i++) // len - 3, т.к. длина меньше на 1 + случай, если всего 3 символа (чтобы не считывались пустые)
    {
        if((s[i] != '-') && (s[i+1] == '-') && (s[i+2] != '-'))
        {
            code1 = s[i]; //аски-код первого символа
            code2 = s[i+2]; //второго
            if(code1 > code2)
            {
                for(int i = 0;i <= abs(code1 - code2);i++)  
                    printf("%c", code1 - i);
            }
            else
            {
                for(int i = 0;i <= abs(code1 - code2);i++)  
                    printf("%c", code1 + i);
            }
        }
        if(s[i] == '-')
        {
            putchar(s[i]);
        }
    ii = i;
    }
    if(s[0] == '-')
        if(s[ii + 1] == '-') // проверка последнего символа, т.к. i <= len - 3
            putchar(s[ii + 1]);


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