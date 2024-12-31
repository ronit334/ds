#include<stdio.h>
int main()
{
    char s[30],a[6];
    int i,j,l,v,n,x,g=4;
    printf("");
    scanf("%[^\n]%*c", s);
    l=strlen(s);
    printf("");
    scanf("%[^\n]%*c", a);
    n=strlen(a);
    i=1;
    j=0;
    if(a[0]=='%')
    while(1)
    {for(i=1;i<n;i++)
    {
        if(a[i]==s[j])
        {
        if(i==1)
            v=j;
            j++;
        }
        else{

            break;
        }
    }
    if(i==n)
    {while(1)
    {if(s[v]==32 || v==l)
      break;
        printf("%c",s[v]);
        v++;
    }
    printf("\n");
    }

    while(s[j]!=32)
    {if(j==l)
        break;
         j++;
    }
    if(j==l)
        break;
    j++;
    }
    else{
            i=0;
    while(j!=l)
    {
        while(1)
    {
        if(s[i]==32 || i==l)
        {x=i;
        x=x-1;
        i++;
            break;
        }
        i++;
    }

     for(v=n-2;v>=0;v--)
     {
         if(s[x]==a[v])
         {j=x;
             x--;


         }
         else{
            break;
         }

     }

        if(v==-1)
        {
               while(1)
            {if(s[j]==32)
            {
                j++;
                break;
            }
            if(j==0)
                break;
            j--;}
           while(1)
           {if(s[j]==32)
             break;
             if(j==l)
                break;
               printf("%c",s[j]);
               j++;
           }
           printf("\n");
        }
g--;
    }
    }
}
