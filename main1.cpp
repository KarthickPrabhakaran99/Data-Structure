#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
}*head;

void create(int num)
{
	struct node *temp;
	if(head==NULL)
	{
		head=malloc(sizeof(struct node));
		head->data=num;
		head->next=NULL;
	}
	
	else
	{
		temp=malloc(sizeof(struct node));
		temp->data=num;
		temp->next=NULL;
		head->next=temp;
	}
}

void printList()
{
	struct node *temp;
	temp=head;
	
	if(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}

void main()
{
int a=5;
create(5);
printfList();

	
	
}
