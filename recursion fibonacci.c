#include<stdio.h>
void f2(int a,int b,int c)
{
    if(a>=c)
    {b=b+c;
    if(c==0)
    {

    }
    else if(a>=b)
    {
        printf("1");
        c=c/2;}

    else{
        printf("0");
        b=b-c;
        c=c/2;
    }
        f2(a,b,c);
    }
    else{
        c=c/2;

        f2(a,b,c);
    }
}
int f1(int a,int b,int c,int d,int n)
{if(d==n)
   {
       c=a+b;
      return c;
   }
    else
    {c=a+b;

    a=b;
    b=c;
    d++;
    return f1(a,b,c,d,n);}
}
int main()
{
    int a,b=0,c=256;
    printf("enter");
    scanf("%d",&a);
    f2(a,b,c);

}
