/*
Name : Jerry
Date : 18=04-2024
Description : WAP to print triangle pattern as shown below
Input :
Output :
 */
#include<stdio.h>

int main()
{

    int num,var=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)                //loop runs as row
    {
	for(int j=1;j<=num-i+1;j++)        //loop runs as colum
	{
	    if(j==1 || i==1 || j+i==num+1) //checks the condition to print number 
	    {	                   
		printf("%d",var);
		var=var+1;
	    }
	    else
		printf(" ");
	}

	printf("\n");
    }
    return 0;
}

