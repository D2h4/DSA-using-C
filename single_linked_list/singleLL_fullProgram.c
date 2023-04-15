#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodetype
{
  int info;
  struct node *next;
}node;
void insertionFromBeg(node **head,int item);
void deletionFromBeg(node** head);
void traversal(node *head);
void insertionFromEnd(node **head,int item);
void deletionFromEnd(node **head);
void main()
{   node *head=NULL;
    int choice,item;
    while(1)
    {   printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:
              printf("enter the item: ");
              scanf("%d",&item);
                insertionFromBeg(&head,item);
              break;
          case 2:
             traversal(head);
             break;
          case 3:
             deletionFromBeg(&head);
             break;
          case 4:
              printf("enter item: ");
              scanf("%d",&item);
             insertionFromEnd(&head,item);
             break;
          case 5:
            deletionFromEnd(&head);
            break;
          default:
            exit(0);
        }
    }
}
void insertionFromBeg(node **head,int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if(*head==NULL)
    {
        ptr->next=NULL;
    }
    else
    {
        ptr->next=*head;
    }
    *head=ptr;
}
void deletionFromBeg(node** head)
{
      node *loc;
      loc=*head;
      (*head)=(*head)->next;
      free(loc);
}
void traversal(node *head)
{
    while(head!=NULL)
    {
        printf("%d\t",head->info);
        head=head->next;
    }
}
void insertionFromEnd(node **head,int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    ptr->next=NULL;
    if(*head==NULL)
    {
        *head=ptr;
    }
    else
    {
         node *loc;
         loc=*head;
        while(loc->next!=NULL)
        {
            loc=loc->next;
        }
        loc->next=ptr;
    }
}
void deletionFromEnd(node **head)
{
    node *ptr,*loc;
    ptr=*head;
    while(ptr->next!=NULL)
    {   loc=ptr;
        ptr=ptr->next;

    }
    loc->next=NULL;
    free(ptr);
}
