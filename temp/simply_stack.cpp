#include<stdio.h>
#include<stdlib.h>
struct  stack { 
    int count; 
    struct node *top; 
}*stk=NULL;

struct  node { 
    int data; 
    struct node *next; 
};

void push(int val){
	if(stk == NULL){
	  stk = (struct stack*)malloc
             (sizeof(struct stack));
	  stk->count=0;
	  stk->top = NULL;
	}
   struct node *temp = (struct node*)malloc
                       (sizeof(struct node));
   temp->data = val;
   temp->next = stk->top;
   stk->top=temp;
   stk->count++;
}

int pop(){
	if(stk == NULL||stk->count==0){
		return -1;
	}
	int val = stk->top->data;
	struct node *temp = stk->top;
	stk->top = temp->next;
	stk->count--;
	free(temp);
	return val;
}
main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		push(a);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",pop());
	}
}

