/*
Name : Jerry
Date : 12-05-24
Description :WAP to print 'n' bits from LSB of a number
Input :
Output :
*/
#include<stdio.h>

void print(int,int);                   //function declaration
int main()
{
    int num,n;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter number of bits:");
    scanf("%d",&n);
    print(num,n);                      //function call
    return 0;
}
void print(int num,int n)              //function definition
{
    if(n==0)
    return;
    else
    {
	if(num&(1<<n-1))
	{
	    printf("1");
	    print(num,n-1);
	}
	else
	{
	    printf("0");
	    print(num,n-1);
	}
    }
}

