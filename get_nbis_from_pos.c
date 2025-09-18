/*
Name : Jerry
Date : 11-04-2024
Description : WAP to get 'n' bits from given position of a number
Input :
Output :
*/
#include<stdio.h>

int replace(int,int,int);                   //function declaration
int main()
{
    int num,n,pos,res;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter number of bits:");
    scanf("%d",&n);
    printf("Enter the value:");
    scanf("%d",&pos);
    printf("Result = %d\n",replace(num,n,pos)); //function call
    return 0;
}
int replace(int num,int n,int pos)          //function definition
{
    return (num>>((pos+1)-n))&(1<<n)-1;
}

