#include <stdio.h>
#include <string.h>

struct Person
{
  char name[25];
  int age;
  char gender;
};

struct Person setData()
{

  struct Person temp;

  printf("\n Enter the name: ");
  scanf("%s", temp.name);

  printf("\n Enter the age: ");
  scanf("%d", &temp.age);

  printf("\n Enter the gender: ");
  scanf(" %c", &temp.gender);

  // temp.name = "New Person";              Don't Works
  //  strcpy(temp.name,"New Person");
  //  temp.age = 0;
  //  temp.gender = '-';

  return temp;
}

void printData(struct Person P)
{
  printf("%s, %d, %c\n", P.name, P.age, P.gender);
}

int main()
{

  struct Person P, Q, R;

  P = setData();
  Q = setData();
  R = setData();

  printData(P);
  printData(Q);
  printData(R);
}