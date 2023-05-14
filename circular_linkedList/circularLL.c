#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int info;
    struct nodetype *next;
}node;
void insertionfromBeg(node **tail,int item);
void insertionfromEnd(node **tail,int item);
void traversal(node *tail);
void deletionfromBeg(node **tail);
void deletionfromEnd(node **tail);
int main()
{   node *tail=NULL;
     int choice,item;
    while(1)
    {  printf("enter your choice: ");
       scanf("%d",&choice);
        switch(choice)
        {
           case 1:
            printf("enter the item: ");
            scanf("%d",&item);
             insertionfromBeg(&tail,item);
              break;
           case 2:
             printf("enter the item: ");
             scanf("%d",&item);
             insertionfromEnd(&tail,item);
             break;
           case 3:
             traversal(tail);
             break;
           case 4:
             deletionfromBeg(&tail);
             break;
           case 5:
             deletionfromEnd(&tail);
             break;
           default:
            exit(0);
        }
    }
    return 0;
}
void insertionfromBeg(node **tail,int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if((*tail)==NULL)
    {
        (*tail)=ptr;
        (*tail)->next=ptr;
    }
    else
    {
        ptr->next=(*tail)->next;
        (*tail)->next=ptr;
    }
    printf("data of first node: %d\n",(*tail)->next->info);
}
void insertionfromEnd(node **tail,int item)
{
     node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if((*tail)==NULL)
    {
        (*tail)=ptr;
        (*tail)->next=ptr;
    }
    else
    {   ptr->next=(*tail)->next;
         (*tail)->next=ptr;
        (*tail)=ptr;
    }
    printf("data of first node: %d\n",(*tail)->next->info);

}
void traversal(node *tail)
{
    node *temp;
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        printf("%d\t",temp->info);
        temp=temp->next;
    }
    printf("%d\n",temp->info);
}
void deletionfromBeg(node **tail)
{    node *temp;
        temp=(*tail)->next;
    if((*tail)==NULL)
        printf("list is empty\n");
    else if((*tail)->next==(*tail))
    {
        (*tail)=NULL;
        free(temp);
    }
    else
    {
        (*tail)->next=temp->next;
        free(temp);
    }
    printf("data of first node: %d\n",(*tail)->next->info);
}
void deletionfromEnd(node **tail)
{   node *temp,*loc;
        temp=(*tail)->next;
    if((*tail)==NULL)
    {
        printf("list is empty\n");
    }
    else if((*tail)->next==(*tail))
    {
        (*tail)=NULL;
        free(temp);
    }
    else
    {
        while(temp->next!=(*tail)->next)
        {
            loc=temp;
            temp=temp->next;
        }
        loc->next=(*tail)->next;
        (*tail)=loc;
        free(temp);

    }
}
