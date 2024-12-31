#include<stdio.h>
typedef struct{
int a;
struct nodee *p;
int v;

}node;
typedef struct{
int d;
struct nodee *next;
}nodee;
void hash(node *arr,int data)
{  if(arr[data]->v==0)
{
    arr[data]->a=data;
    arr[data]->v=1;}
    else{
            nodee *n,*t;
    n=(nodee*)malloc(sizeof(nodee));
    n->d=data;
    n->next=NULL;
        if(arr[data]->p==NULL)
        {
            arr[data]->p=n;
        }
        else{
            t=arr[data]->p->next;
            while(1)
            {
                if(t==NULL)
                {
                    t=n;
                    break;
                }
                else{
                    t=t->next;
                }
            }
        }
    }
}
int main()
{
    node *arr;
    arr=(node*)malloc(sizeof(node)*10);
    hash(arr,2);
    printf("%d",arr[2]->a);
}
