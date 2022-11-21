#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    int i;
    fgets(a,20,stdin);
    for(i=strlen(a)-2;i>=0;i--)
    {
        printf("%c",a[i]);
    }

}