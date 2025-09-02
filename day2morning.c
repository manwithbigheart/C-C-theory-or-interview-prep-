#include <stdio.h>

struct Person
{
  char name[25];
  int age;
  char gender;
};

int main()
{
  // char gen = 'a';

  //------------------------------------------------------------

  // printf("\n %d",gen);
  // printf("\n %c",gen);
  // printf("\n %d",gen);

  //------------------------------------------------------------

  // printf("\n %c",*(&gen));
  // printf("\n %ld",&gen);

  //------------------------------------------------------------

  // char msg[] = "Abdul";

  // printf("\n %ld",msg);
  // printf("\n %ld",&msg[0]);
  // printf("\n %ld",&msg[1]);
  // printf("\n %ld",&msg[2]);
  // printf("\n %ld",&msg[3]);
  // printf("\n %ld",&msg[4]);
  // printf("\n %ld",&msg[5]);
  // printf("\n %ld",&msg[6]);
  // printf("\n %ld",&msg[7]);

  //------------------------------------------------------------
  int i;

  struct Person p1[5];
  for (int i = 0; i < 2; i++)
  {

    fflush(stdin);

    printf("\n Enter your name: ");
    scanf("%s", p1[i].name);

    fflush(stdin);

    printf("\n Enter your age: ");
    scanf("%d", &p1[i].age);

    fflush(stdin);

    printf("\n Enter your gender (M/F): ");
    scanf(" %c", &p1[i].gender);
  }

  for (int i = 0; i < 2; i++)
  {

    printf("\n Details of "
           " as following :");

    printf("\n Name = %s", p1[i].name);
    printf("\n Age = %d", p1[i].age);
    printf("\n Gender = %c", p1[i].gender);
  }
}