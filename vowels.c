#include<stdio.h>
int main()
{
    char str[20];
    int a,l=0;
    printf("enter a string: ");
    fgets(str,20,stdin);
    for(a=0;str[a];a++)
    {
        if(str[a]=='a'||str[a]=='e'||str[a]=='i'||str[a]=='o'||str[a]=='u')
        {
            l++;
        }
    }
    printf("no. of vowels are %d",l);
    

}