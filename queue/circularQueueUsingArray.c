#include<stdio.h>
#include<conio.h>
#define N 5
void enqueue(int queue[],int *front,int *rear,int item);
void dequeue(int queue[],int *front,int *rear);
void display(int queue[],int front,int rear);
void main()
{
    int arr[N], front=-1,rear=-1,item,choice;
    while(1)
    {
        printf("enter your choice: ");
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
        case 3:
            display(arr,front,rear);
        default:
            exit(0);
        }
    }
    getch();
}
void enqueue(int queue[],int *front,int *rear,int item)
{
    if((*rear+1)%N==*front)
    {
         printf("queue is full------\n");
        return;
    }
    else if(*front==-1 && *rear==-1)
    {
        *front=*rear=0;
         queue[*rear]=item;
    }
    else
    {
        *rear=(*rear+1)%N;
        queue[*rear]=item;
    }
    printf("element enqueued successfully---------\n");
}
void dequeue(int queue[],int *front,int *rear)
{
    if(*front==-1 && *rear==-1)
      {
           printf("queue is empty-------------\n");
           return;
      }
   else
   {    printf("dequeued element: %d",queue[*front]);
        if((*front)==(*rear))
        {
              (*front)=(*rear)=-1;
        }
        else
        {
            *front=(*front+1)%N;
        }
   }

}
void display(int queue[],int front,int rear)
{
    int i=front;
    while(i!=rear)
    {
        printf("%d",queue[i]);
        i=(i+1)%N;
    }
    printf("%d",queue[i]);
}
