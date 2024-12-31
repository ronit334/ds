#include<stdio.h>
#include<string.h>
int dup(char a[])
{
    int b[20],v[15],i,j,e=0,l,k=32;
    l=strlen(a);

    for(i=0;i<l;i++)
    {
        b[i]=a[i];
    }
    for(j=0;j<l;j++)
    {if(a[j]!=0 || a[j]!=32)
        {for(i=0;i<l;i++)
        {if(i!=j)
        {
         if(a[j]==a[i])
         {
             a[i]=0;
         }
         else if(a[j]==a[i]+32)
         {
             a[i]=0;
         }
         else if(a[j]==a[i]-32)
         {
             a[i]=0;
         }
        }

        }
    }}

 for(i=0;i<l;i++)
 {
     if(a[i]!=0)
     {
         v[e]=a[i];
         e++;
     }
 }
 for(i=0;i<e;i++)
 {
     printf("%c",v[i]);
 }
}
int main()
{
    char s[20];
    printf("enter");
    gets(s);
    dup(s);
}
