#include<stdio.h>
int main()
{
    int a=2,b,c,d,e,g,f,i,j,n,l=0;

    printf("enter");
    scanf("%d",&n);
    while(1)
        {if(l==n)
        {break;
        }
            a++;
    b=a+1;
    e=b+1;

        c=a*a;
        for(j=1;j<=c;j++)
        {
            d=b*b;
            g=e*e;
            f=c+d;
            if(f==g)
            {
                printf("%d %d %d\n",a,b,e);
                l++;
                break;
            }
            else if(f>g)
            {
                e++;

            }
            else if(f<g)
            {
                b++;
                if(b==25)
                {
                   break;
                }
            }
        }
    }
}
