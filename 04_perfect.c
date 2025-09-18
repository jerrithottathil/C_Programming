/*
Name : Jerry
Date : 18-04-2024
Description : WAP to check if number is perfect or not
Input :
Output :
 */
#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)                         //checks the num is greator than zero
    {
	for(int i=1;i<num;i++)        //loop runs upto less than num
	{
	    if(num%i==0)              //checks the given number is divisible or not
		sum=sum+i;
	}
	if(sum==num)                  //checks the sum is equal to num
	    printf("Yes, entered number is perfect number\n");
	else
	    printf("No, entered number is not a perfect number\n");
    }
    else
	printf("Error : Invalid Input, Enter only positive number\n");
    return 0;
}

