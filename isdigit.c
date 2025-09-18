/*
Name : Jerry
Date : 21-05-2024
Description : WAP to implement your own isxdigit() function
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
	printf("Entered character is an hexadecimal digit\n");
    else
	printf("Entered character is not an hexadecimal digit\n");
    return 0;
}
int alnum(char ch)            //function definition
{
    if(ch>='0'&&ch<='9' || ch>='a'&&ch<='f' || ch>='A'&&ch<='F')
	return 1;
    else
	return 0;
}

