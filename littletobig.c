/*
Name : Jerry
Date :
Description :
Input :
Output :
*/
#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int num;
    scanf("%x",&num);
    void *ptr=&num;
    for(int i=0;i<size/2;i++)
    {
	char temp=*((char*)ptr+i);
	*((char*)ptr+i)=*((char*)ptr+size-i-1);
	*((char*)ptr+size-i-1)=temp;
    }
    printf("%x",num);

    return 0;
}

