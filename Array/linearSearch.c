#include<stdio.h>
void linearSearch(int arr[],int size,int n);
int main()
{
    int a[50],size,n;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    printf("enter the values in the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("enter the value which you want to search: ");
    scanf("%d",&n);
    linearSearch(a,size,n);
    return 0;
}
void linearSearch(int arr[],int size,int n)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
        {
            printf("element is found on index: %d",i+1);
        }
    }
}
