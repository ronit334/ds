#include<stdio.h>
#include<string.h>
int main()
{
    int a[20],b[20],i,j,o=1,v,l,m,g;
    char s[20],n[20];
    printf("enter");
    gets(s);
    printf("enter");
    gets(n);
    v=strlen(s);
    l=strlen(n);
    for(i=0;i<v;i++)
        a[i]=s[i];
    for(i=0;i<l;i++)
        b[i]=n[i];

        i=0;

    while(i<n)
    {
        if(a[i]!=32)
        {
            o=o+1;
            i++;
        }
        else{
            i++;
            break;
        }}
        while(g<o)
        {
            m=0;

            while(j<o)
            {
                if(a[g]==b[j])
                {
                    m=1;
                    j++;
                }
            }
            if(m==0)
            {
                break;
            }
            g++;
        }
printf("%d",o);
    if(m==0)
    {
        printf("-1");
    }
    else{
        printf("1");

    }
}
