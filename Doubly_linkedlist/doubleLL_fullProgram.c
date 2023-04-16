#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodetype
{
    struct nodetype *prev;
    int info;
    struct nodetype *next;
}node;
void insertionFromBeg(node **head,node **tail,int item);
void insertionFromEnd(node **head,node **tail,int item);
void inorderTraversal(node *head);
void reverseTraversal(node *tail);
void deletionFromBeg(node **head,node **tail);
void deletionFromEnd(node **head,node **tail);
void main()
{
    node *head=NULL;
    node *tail=NULL;
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
              insertionFromBeg(&head,&tail,item);
               break;
          case 2:

              printf("enter the item: ");
              scanf("%d",&item);
              insertionFromEnd(&head,&tail,item);
              break;
          case 3:
              inorderTraversal(head);
              break;
          case 4:
              reverseTraversal(tail);
              break;
          case 5:
              deletionFromBeg(&head,&tail);
              break;
          case 6:
              deletionFromEnd(&head,&tail);
              break;
          default:
             exit(0);
        }
    }
}
void insertionFromBeg(node **head,node **tail,int item)
{
     node *ptr;
     ptr=(node*)malloc(sizeof(node));
     ptr->info=item;
     if(*head==NULL)
     {   ptr->prev=ptr->next=NULL;
         *head=*tail=ptr;
     }
     else
     {
         (*head)->prev=ptr;
          ptr->next=*head;
          *head=ptr;
     }
}
void insertionFromEnd(node **head,node **tail,int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if(*head==NULL)
    {    ptr->prev=ptr->next=NULL;
         *head=*tail=ptr;
    }
    else
    {
        ptr->prev=*tail;
        ptr->next=NULL;
        *tail=ptr;
    }
}
void inorderTraversal(node *head)
{
    while(head!=NULL)
    {
        printf("%d",head->info);
        head=head->next;
    }
}
void reverseTraversal(node *tail)
{
    while(tail!=NULL)
    {
        printf("%d",tail->info);
        tail=tail->prev;
    }
}
void deletionFromBeg(node **head,node **tail)
{   node *ptr;
    ptr=*head;
   (*head)=(*head)->next;
    free(ptr);
}
void deletionFromEnd(node **head,node **tail)
{
    node *ptr;
    ptr=(*tail)->prev;
    (*tail)->prev=NULL;
     *tail=ptr;
     ptr->next=NULL;
}
