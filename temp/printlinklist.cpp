#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next; 
};
struct node *head=NULL;

struct node *delete(int key)
{ struct node *temp = head;
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
return temp; 
}




main()
{
}


