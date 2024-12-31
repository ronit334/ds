#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    printf("enter");
    scanf("%d",&a);
    printf("enter");
    scanf("%d",&b);
    for(j=1;j<=b;j++)
    {c=a*j;
         for(i=1;i<=a;i++)
         {d=b*i;
         if(c==d)
         {
             break;
         }

         }
         if(c==d)
         {
             printf("%d",c);
             break;
         }
    }




}
