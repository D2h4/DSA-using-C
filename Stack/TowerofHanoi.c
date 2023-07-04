//program of tower of hanoi using recursion===========
#include<stdio.h>
#include<conio.h>
int towerofhanoi(int n,char A,char B,char C);
void main()
{
    int n;//no of disks
    printf("enter the value of n: ");
    scanf("%d",&n);
    towerofhanoi(n,'A','B','C');
    getch();
}
int towerofhanoi(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("move disks from %c to %c\n",A,C);
        return;
    }
    towerofhanoi(n-1,A,C,B);
    printf("move disks from %c to %c\n",A,C);
    towerofhanoi(n-1,B,A,C);

}
