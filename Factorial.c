/*
Name : Jerry
Date : 14-05-2024
Description :WAP to find factorial of given number using recursion
Input :
Output :

algorithm

intialize static variable num
declare static variable fact as 1

check condition (fact==1) to read num
true-> reads an input once
false-> cannot read input

check condition (num>=0)
false-> prints invalid input
true-> checks inner condition (num==0)
	true->prints the factorial
	false->fact is calculated
		calls main function
		updates num and fact
 */
#include<stdio.h>
int main()
{
    static int num;
    static int fact=1;
    if(fact==1)
    {
	printf("Enter the value of N :");
	scanf("%d",&num);
    }
    if(num>=0)
    {
	if(num==0)
	    printf("Factorial of the given number is %d\n",fact);
	else
	{
	    fact=fact*num--;
		main();
	}
    }
    else
	printf("Invalid Input\n");
    return 0;
}

