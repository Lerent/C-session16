#include <stdio.h>

void swap (int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main ()
{
	int a = 16, b = 7;
	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("Ham sau khi swap la: \n");
	printf("a = %d, b = %d", a, b);
	
	return 0;
}
