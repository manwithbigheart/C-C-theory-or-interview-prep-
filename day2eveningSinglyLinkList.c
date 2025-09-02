#include<stdio.h>

struct  Node
{
  int data;
  struct Node *next;
};


int main(){

  struct Node F,a,b,c,*ptr;

  F.data = 10;
  F.next = NULL;

  a.data = 20;
  a.next = NULL;

  b.data = 30;
  b.next = NULL;

  c.data = 40;
  c.next = NULL;

  //------------------------------------------------------------

  F.next = &a;
  a.next = &b;
  b.next = &c;

  ptr = &F;

  while (ptr != NULL)
  {
    printf("\n %d", ptr->data);

    ptr = ptr->next;
  }
  
  return 0;

}