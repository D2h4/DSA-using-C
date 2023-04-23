#include<stdio.h>
#include<conio.h>

void transpose(int arr[][10],int rows,int col);
void main()
{
    int a[10][10],m,r;
    printf("enter the rows and columns of matrix1: ");
    scanf("%d%d",&m,&r);
    printf("enter the values in the matrix: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<r;j++)

        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 1: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    transpose(a,m,r);
    getch();
}
void transpose(int arr[][10],int rows,int col)
{

    printf("Resultant matrix:\n ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
}
