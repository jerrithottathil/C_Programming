/*
Name : Jerry
Date : 10-05-2024
Description : WAP to get 'n' bits of a given number
Input :
Output :
*/
#include<stdio.h>
int nbits(int num,int n);              //function declaration
int main()
{
int num,n;
printf("Enter the number:");
scanf("%d",&num);
printf("Enter number of bits:");
scanf("%d",&n);
printf("Result = %d\n",nbits(num,n)); //function call
    return 0;
}
int nbits(int num,int n)              //function definition
{
    return num&((1<<n)-1);            //returns the result
}

