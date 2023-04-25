#include<stdio.h>
typedef struct nodetype
{
    int info;
    struct nodetype *next;
}node;
node *top=NULL;
void push(node **top,int item);
void pop(node **top);
int main()
{
    int choice,item;
    while(1)
    {   printf("Press 1 for push operation:---------------------------------------------------\n");
        printf("Press 2 for pop operation:-----------------------------------------------------\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the item: ");
            scanf("%d",&item);
            push(&top,item);

            break;
        case 2:
            pop(&top);
            break;
        default:
            exit(0);
        }
    }
    return 0;
}
void push(node **top,int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if((*top)==NULL)
    {
        ptr->next=NULL;
    }
    else
    {
        ptr->next=(*top);
    }
    (*top)=ptr;
    printf("element pushed successfully:----------------------------------------------------------------------\n");
}
void pop(node **top)
{    node *ptr;
     ptr=*top;
      if((*top)==NULL)
    {
        printf("underflow condition\n");

    }
    else{
         printf("%d\n",(*top)->info);
         (*top)=(*top)->next;
          free(ptr);
          printf("element poped successfully---------------------------------------------------------------------------\n");

    }

}
