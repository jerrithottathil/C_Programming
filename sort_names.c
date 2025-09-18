/*
Name : Jerry
Date :
Description :
Input :
Output :
 */
#include<stdio.h>
#include<stdlib.h>
void sort_names(char (*name)[20], int row);
int cmp(char name[],char name1[]);
void cpy(char des[],char sor[]);
int main()
{
    char (*name)[20];
    int row;
    printf("Enter the size: ");
    scanf("%d",&row);
    name=malloc(row*sizeof(name[20]));
    printf("Enter the 5 names of length max 20 characters in each\n");
    for(int i=0;i<row;i++)
    {
	printf("[%d] -> ",i);
	scanf("%s",name[i]);
    }

    sort_names(name,row);
    printf("The sorted names are:\n");
    for(int i=0;i<row;i++)
    {
	printf("%s\n",name[i]);
    }
    return 0;
}
void sort_names(char (*name)[20], int row)
{
    for(int i=0;i<row-1;i++)
    {
	for(int j=0;j<row-i-1;j++)
	{
	    if(cmp(name[j],name[j+1])==1)
	    {
		char temp[20];
		cpy(temp,name[j]);
		cpy(name[j],name[j+1]);
		cpy(name[j+1],temp);
	    }
	}
    }
}


int cmp(char name[],char name1[])
{
    for(int j=0;j<20;j++)
    {
	if(name[j]==name1[j])
	{
	    continue;
	}
	else if(name[j]>name1[j])
	{
	    return 1;
	}
	else
	    return 0;
    }
}
void cpy(char des[],char sor[])
{
    for(int i=0;i<20;i++)
    {
	des[i]=sor[i];
    }
}
