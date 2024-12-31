#include<stdio.h>
int freq(int a[],int size)
{
    int i,j,b;
    for(j=0;j<size;j++)
    {b=0;
    if(a[j]!=0)
        {for(i=0;i<size;i++)
        {if(a[j]==a[i])
        {
            b=b+1;
            if(b>1)
            {
                a[i]=0;
            }
        }

        }}
        if(b!=0)
        {
            printf("%d %d",a[j],b);
        }
        printf("\n");
    }

}
int main()
{
    int a[20],n,i,s='a',e='e',p='i',o='o',u='u';
    printf("enter");
    scanf("%d",&n);
    printf("enter");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    p=freq(a,n);

}
