/*
Name : Jerry
Date : 16-04-2024
Description : WAP to check if number is odd or even
Input :
Output :
*/
#include<stdio.h>

int main()
{
int num;
printf("Enter the value of 'n' :");
scanf("%d",&num);
if(num==0)                                             //checks num is equal to zero
    printf("0 is neither odd nor even\n");
else
{
if(num>0)                                              //checks num is greater than zero
{
    if(num%2)                                          //checks num is divisible by two
	printf("%d is positive odd number\n",num);
    else
	printf("%d is positive even number\n",num);
}
else
{
    if(num%2)                                          //checks num is divisible by two
	printf("%d is negative odd number\n",num);
    else
	printf("%d is negative even number\n",num);
}
}
    return 0;
}

