#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
void node_creation(){

    head=0;
    int choice;
    while(choice!=0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do u want to insert more nodes: ");
        scanf("%d",&choice);
    }
}
void node_display()
{
  temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void main()
{
    node_creation();
    node_display();

    getch();
}
