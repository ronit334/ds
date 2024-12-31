#include<stdio.h>
int main()
{
    int a[10],n,i,s,v[5],e,b=0;
    printf("");
    scanf("%d",&n);
        printf("");
    scanf("%d",&s);
    printf("");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

     printf("");
    for(i=0;i<s;i++)
        scanf("%d",&v[i]);
        for(i=0;i<s;i++)
        {
            e=v[i]+n;
            if(e<0)
            e=e*-1;
            b=b+a[e];
        }

    printf("%d",b);
}
