/*
Name : Jerry
Date :
Description :
Input :
Output :
*/
#include<stdio.h>
void fun(int **ptr,int num);
int main()
{
int num;
printf("Enter the row and col");
scanf("%d",&num);
if(num%2)
{
    int **ptr=calloc(num*num,sizeof(int));
    fun(ptr,num);
}
else
printf("Enter even num\n");

return 0;
}
void fun(int **ptr,int num)
{
    for(int i=0;i<num*num;i++)
    {
	


