/*
Name : Jerry
Date : 11-05-24
Description : WAP to toggle 'n' bits from given position of a number
Input :
Output :
*/
#include<stdio.h>
int toggle(int,int,int);                   //function declaration
int main()
{
    int num,n,pos;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter number of bits:");
    scanf("%d",&n);
    printf("Enter the value:");
    scanf("%d",&pos);
    printf("Result = %d\n",toggle(num,n,pos)); //function call
    return 0;
}
int toggle(int num,int n,int pos)          //function definition
{
    return (num^((1<<n)-1)<<((pos+1)-n));
}

