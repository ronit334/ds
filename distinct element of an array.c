#include<stdio.h>
int main()
{
    int i,j,n,a[20],v;
    printf("enter");
    scanf("%d",&n);
    printf("enter");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(i!=j)
            {
                if(a[j]!=a[i])
                {
                v=0;
                }
                else{
                    v=1;
                    break;
                }
            }

        }
        if(v==0)
        {
            printf("%d ",a[j]);
        }
    }
}
