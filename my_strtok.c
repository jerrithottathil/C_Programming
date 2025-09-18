/*
Name : Jerry
Date :
Description :
Input :
Output :
*/
#include<stdio.h>
char *my_strtok(char *str,char *del);
int main()
{
    char str[100];
 //   printf("Enter the string:");
    scanf("%[^\n]",str);
    getchar();
    char del[100];
  //  printf("Enter the delimiter:");
    scanf("%[^\n]",del);
    char *token=my_strtok(str,del);
    printf("Tokens :\n");
    while(token!=NULL)
    {
	printf("%s\n",token);
	token=my_strtok(NULL,del);
    }
    return 0;
}
char *my_strtok(char *str,char *del)
{
    static char *ptr;
    static int i=0;
    if(str!=NULL)
    {
	ptr=str;
	i=0;
    }
    if(ptr==NULL)
	return NULL;

    int start=i;
    while(ptr[i]!='\0')
    {
	for(int j=0;del[j]!='\0';j++)
	{
	    if(ptr[i]==del[j])
	    {
		ptr[i]='\0';
		i++;
		if(*(ptr+start)!='\0')
		    return ptr+start;
		else
		    start=i;
		    j=-1;
	    }
	}
	i++;
    }
    if(*(ptr+start)!='\0')
	return ptr+start;
    else
	return NULL;
}
