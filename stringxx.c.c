#include<string.h>
#include<stdio.h>
int main()
{
    char arr[]="python";
    char *str = arr;
    printf("%c\n",*str); //p
    str++;
    printf("%c\n",*str); //y
    str++;
    printf("%c\n",*str); //t
    str++;
    printf("%c\n",*str); //h
    str++;
    printf("%c\n",*str); //o
    


    
    return 0;
}