#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node * next;
};

int size,i,choice,b;
struct node * rear;
struct node * front;
struct node *newnode;
struct node *temp;



void enQueue()
{
     newnode=malloc(sizeof(struct node));
     printf("Enter the element");
     scanf("%d",&newnode->data);
     if(front==NULL&&rear==NULL)
     {
          front=newnode;
          rear=newnode;
          front->next=NULL;
          rear->next=NULL;
     }
     
     else
     {
          rear->next=newnode;
          newnode->next=NULL;
          rear=newnode;
     }
}
void deQueue()
{
     if(front==NULL)
     {
          printf("queue underflow");
          
     }
     else
     {
          temp=front;
          front=front->next;
          free(temp);
     
     }
}

void display()
{
     temp=front;
     while(temp!=NULL)
     {
          printf("\n%d",temp->data);
          temp=temp->next;
     }
}

void main()
{
do{
     printf("Please Enter your choice:\n 1.enQueue\n2.deQueue\n3.display\n");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1 :enQueue();
               break;
       
       case 2 :deQueue();
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

