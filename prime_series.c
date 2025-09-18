/*
Name : Jerry
Date : 28-05-2024
Description : WAP to generate the prime series upto the given limit using functions
Input :
Output :
*/

#include<stdio.h>
int fun(int num);
int main()
{
    int num,count=0;
    scanf("%d",&num);
    if(num>1)
    {
    fun(num);
    }
    else
	printf("Invalid input");
    return 0;
}

int fun(int num)
{
    int count=0;
    for(int i=2;i<=num;i++)
    {
	count=0;
	for(int j=2;j<i;j++)
	{
	    if(i%j==0)
		count++;
	}
	if(count==0)
	    printf("%d ",i);
    }

}

