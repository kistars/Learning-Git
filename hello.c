#include <stdio.h>
#include <stdlib.h>

void printHello() {
    printf("Hello world!");
}

int main()
{
    int a = 1;
    int c = 2;
    int b = 2;
    printf("%d\n", a + b);
    printf(a);
    printf("%d\n", c + 4);

    printHello();
    printf("\n");

    return 0;
}

