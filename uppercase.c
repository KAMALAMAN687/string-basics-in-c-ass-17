#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    char *p;
    fgets(str,20,stdin);
    
//     for(i=0;i<=strlen(str)-1;i++)
  //  {
//        str[i]-=32;
  //  }
     
   // for(i=0;i<=strlen(str)-1;i++)
   // {
   //     printf("%c",str[i]);
   // }
   p=strupr(str);
   printf("%s",p);

}
