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
    unsigned int code1, code2; short ii = 0; unsigned flag = 0;
    if(s[0] == '-') // первое -
        putchar(s[0]);
    for(int i = 0;i <= len - 3;i++) // len - 3, т.к. длина меньше на 1 + случай, если всего 3 символа (чтобы не считывались пустые)
    {
        if((s[i] != '-') && (s[i+1] == '-') && (s[i+2] != '-'))
        {
            code1 = s[i]; //аски-код первого символа
            code2 = s[i+2]; //второго
            if(code1 > code2)
            {
                if(flag == 0)
                {
                    for(int i = 0;i <= abs(code1 - code2);i++)  
                        printf("%c", code1 - i);
                }
                else
                {
                    for(int i = 1;i <= abs(code1 - code2);i++)  
                        printf("%c", code1 - i);
                }
            }
            else
            {
                if(flag == 0)
                {
                    for(int i = 0;i <= abs(code1 - code2);i++)  
                        printf("%c", code1 + i);
                }
                else
                {
                    for(int i = 1;i <= abs(code1 - code2);i++)  
                        printf("%c", code1 + i);
                }
            }
            flag = 1; // уже напечтали первую часть
        }
        if((s[i] == '-') && ((s[i + 1] == '-') || (s[i + 1] == '\0'))) // проверка -, кроме 1 и последней
        {
            putchar(s[i]);
        }
    ii = i;
    }
    if(s[0] == '-') // последне -
        putchar(s[ii + 2]);



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