#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct stacknode
{
int data;
struct stacknode *next;
}*top=NULL;
void main()
{
int opt;
do
{
printf("\n SELECT AN OPERATION\n");
printf("\n 1. PUSH OPERATION\n");
printf("\n 2. POP OPERATION\n");
printf("\n 3. VIEW LINKED STACK\n");
printf("\n 4. EXIT\n");
scanf("%d",&opt);
switch(opt)
{
case 1: push();
break;
case 2: pop();
 break;
case 3: display();
 break;
case 4: exit(0);
default: printf("\n Invalid Option\n");
}
}
while(opt!=4);
}
void push()
{
struct stacknode *newnode;
newnode=(struct stacknode*)malloc(sizeof(struct stacknode));
printf("\n Enter a value :\n");
scanf("%d",&newnode->data);
if(top==NULL)
{
newnode->next=NULL;
top=newnode;
}
else
{
newnode->next=top;
top=newnode;
}
printf("\n Stack elements are\n");
display();
}
void pop()
{
if(top==NULL)
printf("\n Stack Underflow, Insert element\n");
else
{
struct stacknode *temp=top;
top=temp->next;
printf("\n The top element %d has been popped out...\n",temp->data);
free(temp);
printf("\nStack elements are \n");
display();
}
}
void display()
{
struct stacknode *temp=top;
if(top==NULL)
printf("\n STACK IS EMPTY!\n");
else
{
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
