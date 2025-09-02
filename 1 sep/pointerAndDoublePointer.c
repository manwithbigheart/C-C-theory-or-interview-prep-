#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;
    int **pp = &p;

    printf("a = %d\n", a);
    printf("Using single pointer: %d\n", *p);
    printf("Using double pointer: %d\n", **pp);

    return 0;
}
