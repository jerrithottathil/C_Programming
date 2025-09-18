/*
Name : Jerry
Date : 28-05-2024
Description : check whether a given number is prime or not using function.
Input :
Output :
*/

#include<stdio.h>
int fun(int num);
int main()
{
int num;
scanf("%d",&num);
int res=fun(num);
if(res)
    printf("prime\n");
else
    printf("No\n");

    return 0;
}
int fun(int num)
{
    int sum,cum,count,rem;
    for(int i=2;i*i<=num;i++)
    {
	if(num%i==0)
	   count++;
    }
    if(count==0)
	return 1;
    else
	return 0;
}

