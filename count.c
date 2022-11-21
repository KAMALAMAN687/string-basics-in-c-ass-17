#include<stdio.h>
int main()
{
    char str[20];
    int i,j=0,k=0,l=0;
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=95||str[i]>=97&&str[i]<=122)
        j++;
        else
        {
            if(str[i]>=48&&str[i]<=57)
            k++;
            else
            l++;
        }
    }
    printf("alphabets are %d numbers are %d and special character are %d",j,k,l-1);
}