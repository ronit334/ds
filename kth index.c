#include<stdio.h>
int main()
{
    int n,m,i,l,e,v,k;
    printf("");
    scanf("%d",&n);
    printf("");
    scanf("%d",&m);
    scanf("%d",&k);
    l=m;
    v=0;
    while(n<=m)
    {while(1)
    {   if(m>9)
        e=m%10;
        else
            e=m;
        v++;
        if(v==k)
            break;
        m=m/10;
        if(m==0)
        break;
    }
    if(v==k)
        break;
    l--;
    m=l;


    }
    printf("%d",m);
}
