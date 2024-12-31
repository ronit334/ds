#include<stdio.h>
int main()
{
    int a,b=1,i=2;
    printf("enter");
    scanf("%d",&a);

    while(1)
    {if(i*b==a)
    {
        printf("this is not prime");
        break;
    }
    if(b==10)
    {i++;
    b=0;}
    if(i==a)
        break;
    b++;

    }
    if(i==a)
        printf("this is prime");
    }

