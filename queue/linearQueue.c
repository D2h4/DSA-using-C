#include<stdio.h>
#include<conio.h>
#define max 50
void enqueue(int a[],int *front,int *rear,int item);
void dequeue(int a[],int *front,int *rear);
void main()
{   int arr[max],front=-1,rear=-1;
    int choice,item;
    while(1)
    {   printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the item: ");
            scanf("%d",&item);
            enqueue(arr,&front,&rear,item);
            break;
        case 2:
            dequeue(arr,&front,&rear);
            break;
        default:
            exit(0);
        }
    }
}
void enqueue(int a[],int *front,int *rear,int item)
{
    if(*rear==max-1)
    {
       printf("overflow condition");
    }
   else if((*front)==-1)
    {
        (*front)=(*rear)=0;
        a[*rear]=item;
    }
    else
    {
        (*rear)++;
        a[*rear]=item;
    }
}
void dequeue(int a[],int *front,int *rear)
{
    if((*front)==-1 && (*rear)==-1)
    {
        printf("queue is empty----------\n");
    }
    else
    {
        printf("the Dequeued element is: %d\n",a[*front]);

        if((*front)==(*rear))
        {
              (*front)=(*rear)=-1;
        }
        else
        {
                (*front)++;
        }
    }
}
