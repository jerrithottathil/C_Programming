/*
Name : Jerry
Date : 05-06-2024
Description : WAP to implement getword function
Input :
Output :
*/
#include<stdio.h>
//function call
int getword(char *str);
int main()
{
//declaration of the string
char str[100];
printf("Enter the string :");
//read string from user
scanf("%[^\n]",str);
//function call
int count=getword(str);
//printing the output
printf("You entered %s and the length is %d\n",str,count);
    return 0;
}
//function definition
int getword(char *str)
{
    int count=0;
    //loop runs upto the null character
    while(*str)
    {
	//check condition charcter is equal to space and tabspace
	if(*str==' ' || *str==9)
	    break; //true->then come out of the loop
	//increment count is for finding length
	count++;
	//increment the string character
	str++;
    }
    //last assign the string point as null
    *str='\0';
    return count;
}

