#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i;
    fgets(a,20,stdin);
    int b[200]={0,0};
    for(i=0;i<strlen(a);i++)
    {
        b[a[i]]++;
        
    }
    for(i=0;i<200;i++)
    {
        if(b[i]!=0)
        {
            printf("frequency of %c is %d.\n",i,b[i]);
        }
    }

}