/*
Name : Jerry
Date : 21-05-2024
Description : WAP to implement your own ispunct() function
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
	printf("Entered character is punctuation character\n");
    else
	printf("Entered character is not punctuation character\n");
    return 0;
}
int alnum(char ch)            //function definition
{
    if(ch>='!'&&ch<='/')
	return 1;
    else
	return 0;
}

