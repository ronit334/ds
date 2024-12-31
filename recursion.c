#include<stdio.h>
void f1(int a)
{
    if(a==10)
    {
        printf("%d",a);
    }
    else{
        printf("%d",a);
        a++;
        f1(a);
    }
}
int f3(int a,int b)
{
    if(b<10)
    {
        a=b;
        printf("%d",a);
    }
    else{
        a=b%10;
        printf("%d",a);
        b=b/10;
        f3(a,b);
    }
}
int f2(int a,int b,int c)
{int s;
    if(c==a)
    {
       b=b+c;
       return b;
    }
    else{
        b=b+c;
        c++;
        s=f2(a,b,c);
        return s;
    }
}
void f4(int a,int b,int c)
{
    if(a==c)
    {
        b=a*a;
        printf("%d",b);
    }
    else{
        b=a*a;
        printf("%d",b);
        a++;
        f4(a,b,c);
    }
}
int main(){
int a=1,b=0,c;

    printf("enter");
    scanf("%d",&c);
    f4(a,b,c);


}
