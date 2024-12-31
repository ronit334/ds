#include<stdio.h>
int main()
{
    char s[40],*q;
    int i,j,e,v,k=2,n,l;
    printf("");
    scanf("%[^\n]%*c", s);
    n=strlen(s);
    i=0;
    j=i+1;

    while(i!=n)
    {i=j-1;
        v=i;
        while(1)
        {
            if(s[i]==32)
                {i++;
                    break;}
                    if(i==n)
                        break;
            i++;
        }
        l=i;
        if(i==n)
            {
                for(i=0;s[i];i++)
                    printf("%c",s[i]);
                break;
            }
        while(1)
        {if(s[i]==32 || i==n)
            {printf(" ");
                break;}
            printf("%c",s[i]);
            i++;
        }
        i=v;
        while(1)
        {if(s[i]==32)
            {printf(" ");
                break;}
            printf("%c",s[i]);
            i++;

        }
     j=l;
     while(1)
     {if(j==n)
     break;
         if(s[j]==32)
            break;
         j++;
     }
     if(j==n)
        break;
     j=j+2;


        }










}
