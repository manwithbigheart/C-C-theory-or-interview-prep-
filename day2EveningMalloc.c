#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int age;
  float weight;
};

int main()
{

  struct Node F, *ptr;

  ptr = (struct Node *)malloc(sizeof(struct Node));

  ptr->age = 10;
  ptr->weight = 10.23f;

  printf("\n age is %d", ptr->age);
  printf("\n weight is %f", ptr->weight);
  free(ptr);


}