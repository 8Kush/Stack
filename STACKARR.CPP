#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int);
int pop();
void display();
int stack[10];
int top=-1;
void main()
{
 int ch,i,element;
 clrscr();
 while(1)
 {
  printf("Select one of the option \n1.Push\n2.Pop\n3.Display\n4.Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter the element");
   scanf("%d",&element);
   push(element);
   break;
   case 2:printf("Popped element is %d\t",pop());
   break;
   case 3:display();
   break;
   case 4:exit(0);
  }
 }
}
void push(int element)
{
 if(top==9)
 printf("Stack overflow");
 else
 {
  top++;
  stack[top]=element;
 }
}
int pop()
{
 int x;
 if(top<0)
 {
  printf("Stack underflow");
  return 0;
 }
 else
 {
  x=stack[top];
  top--;
  return x;
 }
}
void display()
{
 int i;
 printf("Elements of stack are\n");
 for(i=top;i>=0;i--)
 {
  printf("%d\t",stack[i]);
 }
}
