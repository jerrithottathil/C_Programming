/*
Name : Jerry
Date :
Description :
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
if(limit>=0)
feb(limit,first,second,sum);  //function call
else
printf("Invalid Input\n");
 return 0;
}
void feb(int limit,int first,int second,int sum)         //function definition
{
    if(sum>limit)
	return;
    else
    {
	printf("%d ",sum);
	first=second;
	second=sum;
	return feb(limit,first,second,sum=first+second);
    }
}


