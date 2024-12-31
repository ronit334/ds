#include<stdio.h>
int main()
{
    int a[20],b[10],c[10],i,j,n,o;
    printf("enter");
    scanf("%d",&n);
    printf("enter");
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);}
    printf("enter");
    scanf("%d",&o);
    printf("enter");
    for(i=0;i<o;i++)
        {scanf("%d",&b[i]);}
    printf("enter");
    for(i=0;i<o;i++)
        {scanf("%d",&c[i]);}
    for(i=0;i<o;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                a[j]=c[i];

            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
