/*
Name : Jerry
Date : 15-05-2024
Description : WAP to generate negative fibbonacci numbers using recursion
Input :
Output :
*/
#include<stdio.h>

void feb(int,int,int,int);         //function declaration
int main()
{
int limit,first=0,second=1,sum=0;
printf("Enter the value of N :");
scanf("%d",&limit);
if(limit<0)
feb(limit,first,second,sum);  //function call
else
    printf("Invalid input");
return 0;
}
void feb(int limit,int first,int second,int sum)         //function definition
{
    if(sum>=limit && -sum>=limit)
    {
	printf("%d ",sum);
	first=second;
	second=sum;
	return feb(limit,first,second,sum=first-second);
    }
    else
	return;
}

