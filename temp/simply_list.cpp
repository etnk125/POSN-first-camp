#include<stdio.h>
#include<stdlib.h>
struct  node { 
    int info; 
    struct node *next; 
};
struct node *head = NULL;

void add(int x) 
{ struct node *first; 
   first=(struct node *)malloc(sizeof(struct node));
   first -> info = x;
   first -> next = NULL;
   if(head != NULL)  
    { struct node *temp = head; 
      while(temp->next != NULL) 
       temp = temp->next; 
      temp->next = first; 
    }
   	else        
    head = first; 
}

void insert(int pos, int x) 
 { struct node *first; 
   first = (struct node *) malloc( sizeof (struct node) );
   first -> info = x;
   first -> next = NULL;
  if(head != NULL)  
    {  struct node *temp = head; 
       int c;
			if(pos == 0){
				first->next = head;
				head = first;
			} else {
         for(c=0; c<pos-1 ;c++) 
            temp = temp->next; 
        first->next = temp->next; 
        temp->next = first; 
      }
    } else  head = first;     
 }
int del(int key)
 {
	struct node *del;
	struct node *temp = head;
  	struct node *previous = NULL;

  if(head == NULL)
      return NULL;
   
   while(temp->info != key)  {
     if(temp->next == NULL)
         return NULL;
     else {
      previous = temp;
      temp = temp->next;
      }
   }
   if(temp == head) 
      head = head->next;
   else 
     { previous->next = temp->next;
       free(temp); 
     }  

}



void printList() 
{ struct node *temp; 

  temp = head;      // ???????? head

  while(temp->next != NULL)
   {  printf("%d ", temp->info);
      temp = temp->next;
   }if(temp->next == NULL)printf("%d", temp->info);

}

 



main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int way;
		scanf("%d",&way);
		if( way == 1 )
		{
			int a;
			scanf("%d",&a);
			add(a);
		}
		else if( way == 2 )
		{
			int a,pos;
			scanf("%d %d",&pos,&a);
			insert (pos,a);
		}
		else if( way == 3 )
		{
			int a;
			scanf("%d",&a);
			del(a);
		}
	}
	printList();
	
}

