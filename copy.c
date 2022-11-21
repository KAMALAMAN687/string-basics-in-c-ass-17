#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],*p;
    char b[20];
    fgets(a,20,stdin);
    p=strcpy(b,a);
    printf("%s",&b[0]);
}