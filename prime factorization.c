#include<stdio.h>
int main()
{
    int a,v,c,l;

    printf("");
    scanf("%d",&a);
    l=a;
c=a%10;
a=a/10;
l=a;
while(1)
{
a=a/10;
if(a/10==0)
{
    if(a==c)
        {printf("palindrome");
        break;}
    else
        {printf("non palindrome");
        break;}
}
}
}
