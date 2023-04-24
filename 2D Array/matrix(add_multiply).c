#include<stdio.h>
void addMatrix(int a[][10],int b[][10],int row1,int col1,int row2,int col2);
void multiplyMatrix(int a[][10],int b[][10],int row1,int col1,int row2,int col2);
int main()
{
    int a[10][10],b[10][10],m,n,p,q;
    printf("enter the rows and column of matrix1:\n ");
    scanf("%d%d",&m,&n);
    printf("enter the values of matrix 1:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 1:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the rows and columns of matrix2: \n");
    scanf("%d%d",&p,&q);
    printf("enter the values of matrix 2:\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 2\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    int choice;
    while(1)
    {   printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
           case 1:
             addMatrix(a,b,m,n,p,q);
             break;
           case 2:
              multiplyMatrix(a,b,m,n,p,q);
              break;
           default:
              exit(0);
        }
    }
    return 0;
}
void addMatrix(int a[][10],int b[][10],int row1,int col1,int row2,int col2)
{   int c[10][10];

    if(row1==row2 && col1==col2)
    {
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col1;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
         printf("Resultant matrix:\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("%d\t",c[i][j]);
        }
       printf("\n");
    }
    }
    else
    {
        printf("invalid combination of rows and column\n");
    }

}
void multiplyMatrix(int a[][10],int b[][10],int row1,int col1,int row2,int col2)
{
    int c[10][10];
    if(row2!=col1)
    {
        printf("invalid matrix");
    }
    else
    {   int sum;
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {   sum=0;
                for(int k=0;k<3;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
    printf("Resultant matrix:\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
}

