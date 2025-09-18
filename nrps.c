/*
Name : Jerry
Date :
Description :
Input :
Output :
*/
#include<stdio.h>
void nrps(char str[], int C, int N);
void fun(char str[],int C);
int main()
{
    int C=0,N=0;
    printf("Enter the number characters C :");
    scanf("%d",&C);
    printf("Enter the Length of the string N :");
    scanf("%d",&N);
    getchar();
    char str[C];
    printf("Enter %d distinct characters :\n",C);
    for(int i=0;i<C;i++)
    {
    scanf(" %c",&str[i]);
    }
    nrps(str,C,N);
    
    return 0;
}
void nrps(char str[], int C, int N)
{
    char res[N+1];
    for(int i=0;i<C;i++)
    {
	res[i]=str[i];
    }
    int start=C;
    for(int i=C;i<N;i++)
    {
	if(start==i)
	{
	fun(str,C);
	start=start+C;
	}
	    res[i]=str[i];
    }
    res[N]='\0';
    printf(" %s\n",res);

}
void fun(char str[],int C)
{
    for(int i=0;i<C-1;i++)
    {
	char temp=str[i];
	str[i]=str[i+1];
	str[i+1]=temp;
    }
    for(int i=0;i<C;i++)
	printf("%c ",str[i]);
    printf("\n");
}



