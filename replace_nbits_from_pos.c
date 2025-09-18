/*
Name : Jerry
Date :
Description :
Input :
Output :
*/
#include<stdio.h>

int replace(int,int,int,int);                   //function declaration
int main()
{
    int num,a,b,val;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter number of a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b);
    printf("Enter the value val:");
    scanf("%d",&val);
    printf("Result = %d\n",replace(num,a,b,val)); //function call
    return 0;
}
int replace(int num,int a,int b,int val)          //function definition
{
    int n=b-a+1;
    val=val & (~(((1<<n)-1)<<((b+1)-n)));
    num=(num&((1<<n)-1)) << ((b+1)-n);
    return val | num;
}

