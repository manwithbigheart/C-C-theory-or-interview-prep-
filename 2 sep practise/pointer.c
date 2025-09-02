#include<stdio.h>


void display(int *p){
    printf("\n pointing to: %d",*p++);
    printf("\n pointing to: %d",*++p);
}

int main(){
  int arr[5]={1,2,3,4,5};
  display(&arr[1]);
}