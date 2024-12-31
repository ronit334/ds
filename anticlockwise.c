#include<stdio.h>
int main()
{
    int a[20][20],i,j,l=1,h=0,m,k=0,f=1,o=0,w,u=1,x,p,v,e=1,g,y;
    printf("");
    scanf("%d",&v);
    for(j=0;j<v;j++)
    {
        for(i=0;i<v;i++)
        {
            a[j][i]=0;
        }
    }
    m=v;
    w=v-1;
    x=v-1;
    p=v-2;
    for(g=1;g<=4;g++)
    {
        for(i=v-l;i>=h;i--)
    {
        a[o][i]=e;
        e++;
    }
    for(j=l;j<m;j++)
    {
        a[j][k]=e;
        e++;

    }
    for(i=u;i<=w;i++)
    {
        a[m-1][i]=e;
        e++;
    }


    for(j=p;j>=f;j--)
    {
        a[j][x]=e;
        e++;
    }
    o++;
    l++;
    h++;
    m--;
    k++;
    f++;
    u++;
    w--;
    x--;
    p--;}

for(j=0;j<v;j++)
{
    for(i=0;i<v;i++)
    {
        printf("%d ",a[j][i]);
    }
    printf("\n");
}
}
