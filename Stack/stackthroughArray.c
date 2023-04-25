#include<stdio.h>
#include<conio.h>
#define max 100
void push(int stack[],int *top,int item);
int pop(int stack[],int *top);
void main()
{
    int stack[max],top=-1;
    int choice,item;

    while(1)
    {    printf("Enter 1 for push the elements in the stack-------------------------------------\n");
         printf("Enter 2 for pop the elements in the stack--------------------------------------\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            if(top==max)
                printf("Stack is overflow\n");
            else
            {
               printf("enter the item: ");
               scanf("%d",&item);
               push(stack,&top,item);
            }
            break;
        case 2:
            if(top==-1)
            {
                printf("Stack is underflow\n");
            }
            else
            {
                item=pop(stack,&top);
                printf("Poped item: %d\n",item);
            }
            break;
        default:
            exit(0);
        }
    }
}
void push(int stack[],int *top,int item)
{
    (*top)++;
    stack[*top]=item;
}
int pop(int stack[],int *top)
{
    int item;
    item=stack[*top];
    (*top)--;
    return item;
}
