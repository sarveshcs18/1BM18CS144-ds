#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size_of_stack 50
void push(int[],int*);
void pop(int[],int*);
void main()
{
  int stack[size_of_stack],a,top=-1;
  clrscr();
  do
    {
      printf("\t ******************CUPBOARD MANAGEMENT SYSTEM*****************\n");
      printf("1. To insert clothes into the cupboard \n");
      printf("2. To discrad clothes from the cupboard\n");
      printf("3. Exit \n");
      printf("ENTER THE OPERATION TO BE PERFORMED: \n");
      scanf("%d",&a);
      switch(a)
		{
		  case 1: push(stack,&top);
		  break;
		  case 2: pop(stack,&top);
		  break;
		}
    }
    while(a==1||a==2);
}

void push(int stack[size_of_stack],int*top)
{
    int item;
    if(*top==size_of_stack)
    {
	printf("The cupboard is already FULL\n");
    }
    else
    {
	printf("Enter the item to be inserted inside the cupboard: \n");
	scanf("%d",&item);
	stack[++(*top)]=item;
	printf("The item inserted is: %d\n", item);
    }
}

void pop(int stack[size_of_stack],int *top)
{
    int item;
    if(*top==-1)
    printf("The cupboard is empty\n");
    else
    {
     item=stack[*top];
     (*top)--;
     printf("The element removed from the cupboard is: %d\n",item);
    }
}
