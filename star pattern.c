#include<stdio.h>
int main()
{
    int a=1,i,j;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            if(i>=a)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
        a++;
    }
}
