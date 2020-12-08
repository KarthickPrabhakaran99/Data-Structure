#include <iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
}*head;

void create(int num,int condition,int pos)
{

	       struct node *temp;
	
if(condition==1)
{

		 if(head==NULL)
	        {
	     	head=(struct node *)malloc(sizeof(struct node));
		    head->data=num;
		    head->next=NULL;
            	}
	       	else
	    	{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->data=num;
			temp->next=head;
	
	         head=temp;
			
			
	     	}
	     }
		
			
		
	
else if(condition==2)
{
        struct node *new1;
			if(head==NULL)
	      {
	     	head=(struct node *)malloc(sizeof(struct node));
		    head->data=num;
		    head->next=NULL;
       	}
        
        else
        {
          for(int i=0;i<pos;i++)

		{
		
         temp=temp->next;
		 }
		 new1=(struct node*)malloc(sizeof(struct node));
		 new1->data=num;
		 new1->next=temp->next;
		 temp->next=new1;
		 
		 
}

}
}


void delete1(int num)
{
	struct node *temp,*old;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	if(head->data==num)
	{
	   head = head->next;
	   
	}
	
	else if(head->data!=num)
	{
		while(temp->data!=num)
		{
		 old=temp;
		temp=temp->next;
	 }
	 
		old->next=temp->next;
	    
	}

}

void printList()
{
	struct node *temp;
	temp=head;
	//printf("%d  ",head->data);
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}

int main()
{


create(6,1,0);
create(7,1,0);
create(8,2,1);
create(9,2,0);

printList();
printf("\n");


delete1(8);
delete1(9);
delete1(6);
printList();




return 0;
	
	
}
