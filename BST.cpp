#include <iostream>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left,*right;
}*head;


node insert( node *head, int num)
{

	if(head==NULL)
	{
		head=(struct node *)malloc(struct node);
		head->data=num;
		head->left=NULL;
		head->right=NULL;
	}
	
	else
	{
		if(head->data>num)
		{
			head->left= insert(head->left,num);
		}
		else
		{
			head->right=insert(head->right,num);
		}
	}
	return head;
}
void main()
{
	
	insertHelper(head,4);
	insertHelper(head,5);
insertHelper(head,6);	
}
