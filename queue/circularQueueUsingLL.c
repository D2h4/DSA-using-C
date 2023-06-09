#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodetype
{
  int info;
  struct nodetype *next;
}node;
node *front=NULL;
node *rear=NULL;
void enqueue(node **front,node **rear,int item);
void dequeue(node **front,node **rear);
void traversal(node *front,node *rear);
void main()
{
   int choice,item;
   while(1)
   {
       printf("enter your choice: ");
       scanf("%d",&choice);
       switch(choice)
       {
          case 1:
              printf("enter the item: ");
              scanf("%d",&item);
              enqueue(&front,&rear,item);
                break;
          case 2:
              dequeue(&front,&rear);
              break;
          case 3:
              traversal(front,rear);
              break;
          default:
             exit(0);
       }
   }
   getch();
}
void enqueue(node **front,node **rear,int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if(*front==NULL && *rear==NULL)
    {
        *front=*rear=ptr;
        (*rear)->next=(*front);
    }
    else
    {
        (*rear)->next=ptr;
        *rear=ptr;
        (*rear)->next=*front;
    }
    printf("element inserted successfully----------\n");
}
void dequeue(node **front,node **rear)
{   node *temp;
    temp=*front;
    if(*front==NULL && *rear==NULL)
    {
        printf("queue is empty-------\n");
        return;
    }
    else if(*front==*rear)
    {
        *front=*rear=NULL;
        free(temp);
    }
    else
    {
        (*front)=(*front)->next;
        (*rear)->next=(*front);
    }
    printf("element dequeued successfully-----------\n");
}
void traversal(node *front,node *rear)
{
    node *temp;
    temp=front;
    while(temp!=rear)
    {
        printf("%d",temp->info);
        temp=temp->next;
    }
    printf("%d",rear->info);
}
