#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node * next;
};

int size,i,choice,b;
struct node * head;
struct node *newnode;
struct node *temp;


void NewLinkedList()
{
     
     head=NULL;
     
     printf("Please Enter the size of LINKED LIST");
     scanf("%d",&size);
     for(i=1;i<=size;i++)
     {
          newnode=malloc(sizeof(struct node));
          printf("Enter the element at position %d",i);
          scanf("%d",&newnode->data);
          newnode->next=NULL;
          if(head==NULL)
          {
               head=newnode;
               temp=newnode;
          }
          else
          {
               temp->next=newnode;
               temp=newnode;
          }
     }
}

void InsertAtFirst()
{
     newnode=malloc(sizeof(struct node));
     printf("Enter the element");
     scanf("%d",&newnode->data);
     newnode->next=head;
     head=newnode;
}


void InsertAtLast()
{
     newnode=malloc(sizeof(struct node));
     printf("Enter the element");
     scanf("%d",&newnode->data);
     temp=head;
     while(temp->next!=NULL)
     {
          temp=temp->next;
     }
     
     temp->next=newnode;
     newnode->next=NULL;
}

void InsertAfter()
{
     int pos;
     int count=0;
     i=0;
     
     temp=head;
     
     while(temp!=NULL)
     {
          temp=temp->next;
          count++;
     }
     
     printf("Please Enter the position");
     scanf("%d",&pos);
     
     if(pos>count)
     {
          printf("Invalid position Entered");
     }
     
     temp=head;
     while(i<pos-1)
     {
          temp=temp->next;
          i++;
     }
     
     newnode=malloc(sizeof(struct node));
     printf("Enter the element");
     scanf("%d",&newnode->data);
     newnode->next=temp->next;
     temp->next=newnode;
     
     }

void DeleteFirst()
{
     if(head==NULL)
     {
          printf("Empty List");
          
     }
     else
     {
          temp=head;
          head=head->next;
          free(temp);
     
     }
}

void DeleteLast()
{
     struct node * prevnode;
     temp=head;
     while(temp->next!=NULL)
     {
          prevnode=temp;
          temp=temp->next;
     }
     prevnode->next=NULL;
     free(temp);
     
}

void DeletePosition()
{
     struct node * nextnode;
     int pos,i=1;
     printf("Please Enter the position");
     scanf("%d",&pos);
     
     while(temp!=NULL)
     {
          temp=temp->next;
     }
     
     
          temp=head;
          while(i<pos-1)
          {
               temp=temp->next;
               i++;
          }
     
     nextnode=temp->next;
     temp->next=nextnode->next;
     free(nextnode);
}


void display()
{
     temp=head;
     while(temp!=NULL)
     {
          printf("\n%d",temp->data);
          temp=temp->next;
     }
}

void main()
{
do{
     printf("Please Enter your choice:\n 1.InsertAtFirst\n2.InsertAtLast\n3.InsertAfter\n4.DeleteFirst\n5.DeleteLast\n6.DeletePosition\n7.NewLinkedList\n8.display\n");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1 :InsertAtFirst();
               break;
       case 2 :InsertAtLast();
               break;
       case 3 :InsertAfter();
               break;
       case 4 :DeleteFirst();
               break;
       case 5 :DeleteLast();
               break;
       case 6 :DeletePosition();
               break;
       case 7 :NewLinkedList();
               break;
       case 8 :display();
               break;
       default :
               printf("Enter valid choice");
     }
     printf("\nEnter 1 to continue");
     scanf("%d",&b);
 }while(b==1);

}

























