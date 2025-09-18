/*
Name : Jerry
Date : 18-04-2024
Description : WAP to print the numbers in X format as shown below
Input :
Output :
*/
#include<stdio.h>

int main()
{

int num;
printf("Enter the number: ");
scanf("%d",&num);
for(int i=1;i<=num;i++)       //loop runs as row
{
    for(int j=1;j<=num;j++)   //loop runs as colum
    {
	if(i==j)              //checks row and colum is equal
	printf("%d",i);
	else if(i+j==num+1)   //checks sum of row is greater than num + 1
	printf("%d",j);
	else
	    printf(" ");
    }

printf("\n");
}
    return 0;
}

