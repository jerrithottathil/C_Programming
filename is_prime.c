/*
Name : Jerry
Date : 10-05-2024
Description : WAP to check whether a given number is prime or not.
Input :
Output :
*/
#include<stdio.h>

int main()
{
int num,count=0;
scanf("%d",&num);
if(num>1)                          //checks the num is greater than one
{
    for(int i=2;i*i<=num;i++)      //loop runs upto i square, which uses less number of ittreation
    {
	if(num%i==0)               //if num is divisible count becomes one which means its a prime
	    count++;
    }
    if(count)
	printf("%d is not a prime number\n",num);
    else
	printf("%d is a prime number\n",num);
}
else
printf("Invalid input");


    return 0;
}

