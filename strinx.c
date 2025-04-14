#include<string.h>
#include<stdio.h>
int main()
{
    char arr[]="python";

    printf("lenth of string is:%d\n",strlen(arr));
    printf("lenth of string is:%d\n",sizeof(arr));
    
    printf("%c\n",arr[3]);
    printf("%c\n",arr[5]);
    printf("%c\n",arr[1]);

    return 0;
}