/*
Name : Jerry
Date : 19-04-2024
Description : WAP to find which day of the year
Input :
Output :
 */
#include<stdio.h>

int main()
{
    int start,n,var;
    printf("Enter the value of 'n' :");
    scanf("%d",&n);
    if(n>0&&n<366)                                             //checks the n is between 1 and 365
    {
	printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
	printf("Enter the option to set the first day :");
	scanf("%d",&start);
	if(1<=start<=7)                                        //checks the start value is between 1 and 7
	{
	    var=start+n-1;
	    switch (var%7)                                     //based on the value of expression recquired case will excecute
	    {
		case 1: printf("The day is Sunday\n");
			break;
		case 2: printf("The day is Monday\n");
			break;
		case 3: printf("The day is Tuesday\n");
			break;
		case 4: printf("The day is Wednesday\n");
			break;
		case 5: printf("The day is Thursday\n");
			break;
		case 6: printf("The day is Friday\n");
			break;
		default: printf("The day is Saturday\n");
	    }
	}
	else
	    printf("Error: Invalid input, first day should be > 0 and <= 7\n");
    }
    else
	printf("Error: Invalid Input, n value should be > 0 and <= 365\n");

    return 0;
}

