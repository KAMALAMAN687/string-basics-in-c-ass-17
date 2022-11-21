#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,j,c;
    gets(a);
    for(i=0;i<strlen(a)-1;i++)
    {
        for(j=i+1;j<strlen(a);j++)
        {
            if(a[i]>=a[j])
            {
                c=a[j];
                a[j]=a[i];
                a[i]=c;
            }

        }
    }
    printf("%s",a);
}