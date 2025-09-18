/*
Name : Jerry
Date : 07-06-2024
Description : WAP to reverse the given string using iterative method
Input :
Output :
 */
#include<stdio.h>
void reverse_iterative(char str[]);
int main()
{
    char str[100];
    int i=0;
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    reverse_iterative(str);
    printf("Reverse string is : %s\n",str);
    return 0;
}
void reverse_iterative(char str[])
{
    int i=0,temp=0;
    while(str[i])
	i++;
    for(int j=0;j<i/2;j++)
    {
	temp=str[j];
	str[j]=str[i-j-1];
	str[i-j-1]=temp;
    }
}

