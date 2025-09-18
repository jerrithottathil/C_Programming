/*
Name : Jerry
Date :
Description :
Input :
Output :
*/
#include <stdio.h>

int my_atoi(const char str[]);

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}
int my_atoi(const char str[])
{
    int i=0,num=0,flag=1;
    if((str[0]>='0'&&str[0]<='9') || str[0]=='-' || str[0]=='+'||str[1]!='-')
    {
	if(str[0]=='-')
	{
	    flag=-1;
	    i=1;
	}
	else if(str[0]=='+')
	{
	    flag=1;
	    i=1;
	}
	else
	    i=0;
	for(i;(str[i]!='\0'&& (str[i]>='0'&&str[i]<='9'));i++)
	{
	    num=num*10+(str[i]-48);
	}
	return flag*num;
    }
    else
	return 0;
}
