#include <stdio.h>
int main()
{
  // User Details form

  char name[50];
  int age;
  float weight;
  int height;
  char address[100];
  

  printf("Enter your name: ");
  fgets(name, 50, stdin);

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your weight (in kg): ");
  scanf("%f", &weight);

  printf("Enter your height (in centimeters): ");
  scanf("%d", &height);

  printf("\n User Details:\n");
  printf("Name: %s", name);
  printf("Age: %d\n", age);
  printf("Weight: %.2f kg\n", weight);
  printf("Height: %d cm\n", height);
}
''