#include <stdio.h>

void upsum (int a, int b, int *result) {
	*result = a + b;
}
int main () {
	int a = 16, b = 7;
	int sum = 0;
	upsum(a, b, &sum);
	printf("Tong cua %d va %d la: %d\n", a, b, sum);
	
	return 0;
}
