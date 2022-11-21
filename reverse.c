#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i;
    fgets(str,20,stdin);
    for(i=strlen(str);i>=0;i--)
    {
        printf("%c",str[i]);
    }
}