#include<stdio.h>
#include<conio.h>
void insertionAtSpecificPosition(int a[],int *size,int item,int pos);
void deletionAtSpecificPosition(int a[],int *size,int pos);
void traversal(int a[],int size);
void main()
{  int arr[50];
   int size;
   printf("enter the size of array: \n");
   scanf("%d",&size);
   printf("enter the elements in array: \n");
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
     int choice;
      int item,loc;
    while(1)
    {   printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:

            printf("enter the item which you want to insert: \n");
            scanf("%d",&item);
            printf("enter the location in which you want to insert the item: ");
            scanf("%d",&loc);
            insertionAtSpecificPosition(arr,&size,item,loc);
            break;
          case 2:

               printf("enter the location in which you want to delete the item: ");
               scanf("%d",&loc);
               deletionAtSpecificPosition(arr,&size,loc);
               break;
          case 3:
            traversal(arr,size);
            break;
          default:
            exit(0);
        }

    }
    getch();
}
void insertionAtSpecificPosition(int a[],int *size,int item,int pos)
{
    if(pos<=0 || pos>(*size)+1)
        printf("Invalid position");
    else
    {
        for(int i=(*size)-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=item;
        (*size)++;
        printf("item inserted successfully------------\n");
    }
}
void deletionAtSpecificPosition(int a[],int *size,int pos)
{
    if(pos<=0 || pos>(*size))
    {
        printf("invalid");
    }
    else
    {
        for(int i=pos-1;i<(*size)-1;i++)
        {
            a[i]=a[i+1];
        }
       (*size)--;
        printf("item deleted successfully-------------\n");
    }
}
void traversal(int a[],int size)
{
    printf("Required Array: \n");
    printf("---------------------------------------\n");
    for(int i=0;i<size;i++)
    {
       printf("%d\t",a[i]);
    }
     printf("\n---------------------------------------");
}
