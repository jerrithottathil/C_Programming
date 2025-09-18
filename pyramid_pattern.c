/*
Name : Jerry
Date :
Description :
Input :
Output :
*/
#include<stdio.h>

int main()
{

int num;
printf("Enter the number: ");
scanf("%d",&num);
for(int i=1;i<num;i++)       //loop runs as row
{
    int var=num-i+1;
    for(int j=1;j<=i;j++)   //loop runs as colum
    {
	printf("%d ",var);
	var++;
    }

printf("\n");
}
for(int i=1;i<=num;i++)       //loop runs as row
{
    int var=i;
    for(int j=1;j<=num-i+1;j++)   //loop runs as colum
    {
	printf("%d ",var);
	var++;
    }

printf("\n");
}
    return 0;
}

