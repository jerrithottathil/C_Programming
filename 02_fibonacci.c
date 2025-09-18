/*
Name : Jerry
Date : 17-04-2024
Description : WAP to generate positive Fibonacci numbers
Input :
Output :
*/
#include<stdio.h>

int main()
{
int num,first=0,second=1,sum=0;
printf("Enter a number:");
scanf("%d",&num);
if(num>0)                         //checks the number is greater than zero
{
while(sum<=num)                   //checks sum is less than or equal to number
{
    printf("%d ",sum);
    first=second;
    second=sum;
    sum=first+second;
}
printf("\n");
}
else                              //prints the number is less than zero
printf("Invalid input\n");
    return 0;
}

