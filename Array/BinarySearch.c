#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[10],item;
  printf("enter the values in the array:\n ");
  for(int i=0;i<10;i++)
  {
       scanf("%d",&arr[i]);
  }
  printf("Resultant Array:\n ");
  for(int i=0;i<10;i++)
  {
      printf("%d\t",arr[i]);
  }
  printf("\n enter the item which u want to search: ");
  scanf("%d",&item);
  int result=binarySearch(arr,10,item);
  printf("the element is found on index :%d",result);
  getch();
}
int binarySearch(int a[],int n,int item)
{
   int beg=0;
   int end=n-1;
   int mid;
   mid=(beg+end)/2;
   while(beg<=end && a[mid]!=item)
   {
       if(item<a[mid])
       {
          end=mid-1;
       }
       else
        {
            beg=mid+1;
        }

       mid=(beg+end)/2;
   }
   if(beg>end)
    {
        return -1;
    }
    else
    {
        return mid+1;
    }
}
