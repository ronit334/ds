#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],a[10];
    int i,v,g,t,e=0,c=0,b=0;
    printf("enter");
    gets(s);
    printf("enter");
    gets(a);
    while(1)
    {
        if(a[e]!='%')
        c=c+a[e];
        e++;
            if(a[e]==0)
                break;
    }
    printf("%d",c);
    e=0;
    v=strlen(a);

    v=v-1;

    i=0;
    if(a[0]=='%')
    {
    while(s[i])

    {t=e;

        for(i=1;i<=v;i++)
    {
        if(a[i]==s[e])
        {
            g=1;
            e++;
        }
        else{
            g=0;
            break;
        }
    }
    while(1)
    {
        if(s[e]!=32)
            e++;
        else{
            e++;
            break;
        }
    }
    if(g==1)
    {i=t;
        while(s[i]!=32)
        {
            printf("%c",s[i]);
            i++;
            if(s[i]==0)
                break;
        }
    }

    }



    }
    else{

    while(s[i])
    {t=i;
        while(s[i]!=32)
        {
            if(a[e]==s[i])
            {
                e++;
                g=1;
            }
            else{
                if(g==1)
                    {g=0;
                        break;}
            }
            i++;
        }
        if(g==1)
        {b=t;
            while(s[b]!=32)
            {
                printf("%c",s[b]);
                b++;
                if(s[b]==0)
                    break;
            }

        }
        while(s[i]!=0)
        {
            if(s[i]!=32)
                i++;
            else{
                i++;
                break;
            }
        }
       e=0;
    }



    }


}
