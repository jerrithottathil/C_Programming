/*
Name : Jerry
Date : 16-05-2024
Description : WAP to implement your own isalnum() function
Input :
Output :
*/
#include<stdio.h>
int alnum(char ch);           //function declaration
int main()
{
    char ch;
    int ret;
    scanf("%c",&ch);
    ret=alnum(ch);            //function call
    if(ret)
	printf("The character '%c' is an alnum character.\n",ch);
    else
	printf("The character '%c' is not an alnum character.\n",ch);
    return 0;
}
int alnum(char ch)            //function definition
{
    if(ch>='A'&&ch<='Z')
	return 1;
    else if(ch>='a'&&ch<='z')
	return 1;
    else if(ch>='0'&&ch<='9')
	return 1;
    else
	return 0;
}

