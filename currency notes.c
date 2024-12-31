#include<stdio.h>
int main()
{
    int a,v=0,c=1000;
    printf("enter");
    scanf("%d",&a);
    while(1)
    {
        if(a>=c)
        {
            v++;
            a=a-c;
        }
        else if(c==1000)
            {printf("1000 %d",v);
            printf("\n");
            v=0;
                c=500;}
        else if(c==500)
            {printf("500 %d",v);
            printf("\n");
               v=0;
                c=100;}
        else if(c==100)
            {printf("100 %d",v);
            printf("\n");
               v=0;
                c=50;}
        else if(c==50)
            {printf("50 %d",v);
            printf("\n");
               v=0;
                c=20;}
        else if(c==20)
            {printf("20 %d",v);
            printf("\n");
               v=0;
                c=10;}
                else if(c==10)
            {printf("10 %d",v);
                break;}
    }
}
