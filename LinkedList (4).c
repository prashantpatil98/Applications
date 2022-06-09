//Singly linear linkedlist
#include<stdio.h>
#include<stdlib.h>
/*
	InsertFirst
	InsertLast
	InsertAtPosition
	DeleteFirst
	DeleteLast
	DeleteAtPosition
	Display
	Count
*/


struct node
{
	int data;
	struct
	node* next;
};
	
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	newn-> data = iNo;
	newn-> next = NULL;
	
	if(Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn-> next = *Head;
		*Head = newn;
	}
}

int main()
{
	PNODE First = NULL;    
	
	InsertFirst(&First, 101);
	InsertFirst(&First, 51);
	InsertFirst(&First, 21);
	InsertFirst(&First, 11);
	
	return 0;
}


/*
RULES
1. Use only dyanamic memory allocation
2.Dont write any technical syntax in main
3.dont use any global variable
4.Be careful while manupulating first pointer
5.pass The first pointer directly if the function is not going to modify the LL (display,Count)
6.pass the address of the first pointer if the function is going to modify LL(InsertFirst,InsertLast, InsertAtPosition
*/