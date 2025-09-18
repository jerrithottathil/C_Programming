/*
Name : Jerry
Date :
Description :
Input :
Output :
 */
#include<stdio.h>
#include<stdlib.h>
void add(void *ptr);
void removee(void *ptr);
void display(void *ptr);
static int char_flag1=0,char_flag2=0,int_flag=0,float_flag=0,short_flag=0,double_flag=0;
int main()
{
    void *ptr;
    ptr=malloc(8);
    int choice,type;
    do
    {
	printf("Menu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n");
	printf("\n");
	printf("Choice ---> ");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:add(ptr);
		   break;

	    case 2:removee(ptr);
		   break;

	    case 3:display(ptr);
		   break;

	    default:
	}

    }while(choice != 4);

    free(ptr);


    return 0;
}

void add(void *ptr)
{
    int type;

    printf("Enter the type you have to insert:\n1. int\n2. char\n3. float\n4. double\nChoice ---> ");
    scanf("%d",&type);
    switch(type)
    {
	case 1:
	    if(int_flag==0 && float_flag==0 && double_flag==0)
	    {
		printf("Enter the int: ");
		int value1;
		scanf("%d",&value1);
		*((int*)ptr+4)=value1;
		int_flag=1;
	    }
	    else
		printf("Memory full\n");
	    break;

	case 2:
	    if(char_flag1==0 && double_flag==0)
	    {
		char value2;
		printf("Enter the char: ");
		scanf(" %c",&value2);
		getchar();
		*((char*)ptr)=value2;
		char_flag1=1;
	    }
	    else if(char_flag2==0 && double_flag==0)
	    {
		char value2;
		printf("Enter the char: ");
		scanf(" %c",&value2);
		getchar();
		*((char*)ptr+1)=value2;
		char_flag2=1;
	    }
	    else
		printf("Memory full\n");
	    break;

	case 3:
	    if(float_flag==0 && int_flag==0 && double_flag==0)
	    {
		printf("Enter the float: ");
		float value3;
		scanf("%f",&value3);
		*((float*)ptr+4)=value3;
		float_flag=1;
	    }
	    else
		printf("Memory full\n");
	    break;

	case 4:
	    if(double_flag==0 && char_flag1==0 && char_flag2==0 && int_flag==0 && float_flag==0)
	    {
		printf("Enter the double: ");
		double value4;
		getchar();
		scanf("%lf",&value4);
		*((double*)ptr)=value4;
		double_flag=1;
	    }
	    else
		printf("Memory full\n");
	    break;
	default:
    }
}

void removee(void *ptr)
{

    if(char_flag1)
	printf("0 -> %c\n",*((char*)ptr));
    if(char_flag2)
	printf("1 -> %c\n",*((char*)ptr+1));
    if(int_flag)
	printf("4 -> %d\n",*((int*)ptr+4));
    if(float_flag)
	printf("4 -> %f\n",*((float*)ptr+4));
    if(double_flag)
	printf("0 -> %lf\n",*((double*)ptr));

    int index;
    printf("Enter the index value to be deleted : ");
    scanf("%d",&index);
    switch (index)
    {
	case 0: char_flag1=0;
		double_flag=0;
		break;
	case 1: char_flag2=0;
		break;
	case 4:int_flag=0;
	       float_flag=0;
	       break;
	default :printf("Enter a valid index\n");
    }
    printf("index %d successfully deleted.\n",index);

}

void display(void *ptr)
{
    printf("-----------------------------\n");
    if(char_flag1)
	printf("0 -> %c(char)\n",*((char*)ptr));
    if(char_flag2)
	printf("1 -> %c(char)\n",*((char*)ptr+1));
    if(int_flag)
	printf("4 -> %d(int)\n",*((int*)ptr+4));
    if(float_flag)
	printf("4 -> %f(float)\n",*((float*)ptr+4));
    if(double_flag)
	printf("0 -> %lf(double)\n",*((double*)ptr));
    printf("-----------------------------\n");
}
