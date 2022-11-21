#include<stdio.h>
int main()
{
    char a[20];
    int i,l=0;
    printf("enter a string: ");
    fgets(a,20,stdin);
    printf("enter a character: ");
    char b;
    scanf("%c",&b);
    for(i=0;a[i];i++)
    {
        if(a[i]==b)
        {
            l++;
        }

    }
    printf("occurence of %c in %s is %d",b,a,l);

}