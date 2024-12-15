#include <stdio.h>

int main() 
{
    int a = 167;
    int *p = &a;
    printf("Cach 1:\n");
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", (void*)&a);
    printf("Cach 2:\n");
    printf("Gia tri cua a (thong qua con tro): %d\n", *p);
    printf("Dia chi cua a (thong qua con tro): %p\n", (void*)p);

    return 0;
}

