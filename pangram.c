/*
Name : Jerry
Date : 07-06-2024
Description : WAP to check given string is Pangram or not
Input :
Output :
*/
#include<stdio.h>
//function declaration
int pangram(char str[]);
int main()
{
    //read a string named str
char str[100];
printf("Enter the string:");
scanf("%[^\n]",str);
//function call and collect it in count
int count=pangram(str);
//checks the count value is equal
if(count==26)
    //true->prints output
    printf("The Entered String is a Pangram String\n");
//false->prints its false
else
    printf("The Entered String is not a Pangram String\n");
    return 0;
}
//function definition
int pangram(char str[])
{
    int i=0;
    //intialize an array of size 26 filled with zeros
    int arr[26]={0};
    //runs loop until string terminates
    while(str[i]!='\0')
    {
	//checks the small letters from a to z is present
	if(str[i]>='a'&& str[i]<='z')
	    //true->then index of alphabet in array is set to 1
	    arr[str[i]-'a']=1;
	//same for capital letters
	if(str[i]>='A'&&str[i]<='Z')
	    arr[str[i]-'A']=1;
	i++;
    }
    int count=0;
    //loop upto array size
    for(int i=0;i<26;i++)
    {
	//checks for nonzero elements
	if(arr[i])
	    //true->increment count
	    count++;
    }
 //   printf("%d",count);
    //returns the count value
    return count;
}


