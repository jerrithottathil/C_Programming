/*
Name : Jerry
Date :
Description :
Input :
Output :
 */

#include <stdio.h>

void my_atoi(char str[],int num);

int main()
{
    char str[10];
    int num; 
    printf("Enter the number : ");
    scanf("%d",&num);
    int neg=num;
    if(num>0||num<0)
    {
	my_atoi(str,num);
	if(neg<0)
	{
	    str[0]='-';
	    printf("Integer to string is %s\n",str);
	}
	else
	    printf("Integer to string is %s\n",str);

    }
    else
	printf("Integer to string is 0\n");
}
void my_atoi(char str[],int num)
{
    int rem=0,rev=0,count=0,i=0;
    for(int i=0;num!=0;i++)
    {
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	count++;
    }
    if(rev<0)
    {
	rev=rev*-1;
	i=1;
	count++;
    }
    for(i;i<count;i++)
    {
	rem=rev%10;
	str[i]=rem+48;
	rev=rev/10;
    }
    str[count]='\0';

}

