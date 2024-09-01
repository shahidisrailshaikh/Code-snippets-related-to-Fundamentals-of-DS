#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node * next;
};

int size,i,choice,b;
struct node * top;
struct node *newnode;
struct node *temp;



void push()
{
     newnode=malloc(sizeof(struct node));
     printf("Enter the element");
     scanf("%d",&newnode->data);
     newnode->next=top;
     top=newnode;
}

void pop()
{
     if(top==NULL)
     {
          printf("Empty List");
          
     }
     else
     {
          temp=top;
          top=top->next;
          free(temp);
     
     }
}

void display()
{
     temp=top;
     while(temp!=NULL)
     {
          printf("\n%d",temp->data);
          temp=temp->next;
     }
}

void main()
{
do{
     printf("Please Enter your choice:\n 1.push\n2.pop\n3.display\n");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1 :push();
               break;
       
       case 2 :pop();
               break;
               
       case 3 :display();
               break;
       
       default :
               printf("Enter valid choice");
     }
     printf("\nEnter 1 to continue");
     scanf("%d",&b);
 }while(b==1);

}


