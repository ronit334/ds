#include<stdio.h>
int main()
{
    int a[50],c,b=0,v=0,n,i;
    printf("");
    scanf("%d",&n);
    printf("");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            v++;
        }
        else{

            if(v>b)
            {b=v;

            }
            v=0;
        }
    }
    printf("%d",b+1);

}
