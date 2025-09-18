/*
Name : Jerry
Date : 10-05-2024
Description : WAP to replace 'n' bits of a given number
Input :
Output :
 */
#include<stdio.h>
int replace(int,int,int);                   //function declaration
int main()
{
    int num,n,val;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter number of bits:");
    scanf("%d",&n);
    printf("Enter the value:");
    scanf("%d",&val);
    printf("Result = %d\n",replace(num,n,val)); //function call
    return 0;
}
int replace(int num,int n,int val)          //function definition
{
    return (val&((1<<n)-1)) | (num & ~((1<<n)-1)); 
}



