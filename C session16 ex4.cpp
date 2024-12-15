#include <stdio.h>

void arr(int *list, int size) {
	for(int i = 0; i < size; i++) {
		printf("Phan tu thu %d la: %d\n", i, *(list + i));
	}
}
int main () {
	int list[] = {1, 6, 7, 2, 0};
	int size = sizeof(list)/sizeof(list[0]);
	printf("Cac phan tu co trong mang la: \n");
	arr(list, size);
}
