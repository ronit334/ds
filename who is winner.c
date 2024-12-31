#include<stdio.h>
int main()
{
    int a[3][3],i,j,n,index,v,l=-1,p=9,e,s;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=-1;
        }
    }
    e=0;
    s=0;
    while(p)
    {printf("");
    scanf("%d",&n);
    if(l==n)
    {
        printf("error");
        break;
    }
    if(s==3)
    {
        e++;
        s=0;
    }
    else if(s==6)
    {
        e++;
        s=0;
    }
a[e][s]=n;
s++;

    for(i=0;i<3;i++)
    {v=0;
        for(j=0;j<3;j++)
        {
            if(a[j][i]==n)
            {
                v++;
            }
        }
        if(v==3)
            break;
    }


    if(v!=3)
    {
        for(i=0;i<3;i++)
        {v=0;
            for(j=0;j<3;j++)
            {
                if(a[i][j]==n)
                    v++;
            }
            if(v==3)
                break;
        }
    }

    if(v!=3)
    {v=0;
        for(i=0;i<3;i++)
        {
            if(a[i][i]==n)
                v++;
        }

    }
if(v!=3)
{j=0;
v=0;
for(i=2;i>=0;i--)
{
    if(a[j][i]==n)
    {
        v++;
    }
    j++;
}

}
    if(v==3)
    {
        printf("%d",n);
        break;
    }
    else if(p==1)
    {
        printf("-1");
        break;
    }
    p--;
    }

printf("\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

}
