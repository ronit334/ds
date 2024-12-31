#include<stdio.h>
int main()
{
    int i,j,e,a=5,b=5;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            if(a<=i)
            {
                printf("$");
            }
            else{
                printf(" ");
            }
        }
        for(e=6;e<=9;e++)
        {
            if(b>=e)
            {
                printf("$");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        a--;
        b++;
    }
}
