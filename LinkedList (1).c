#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	//static memory allocation
	struct node obj;
	
	
	//Dynamic memory allocation
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	
	obj.data = 11;
	obj.next = NULL;
	
	ptr -> data = 11;
	ptr -> next = NULL;
	
	return 0;
}