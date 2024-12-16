#include <stdio.h>

void arr(int *list, int size) {
	for(int i = 0; i < size; i++) {
		for(int j = i + 1; j < size; j ++) {
			if(list[i] > list[j]) {
				int temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}
}
int main () {
	int list[] = {1,6,7,2,0,60,16,26};
	int size = sizeof(list)/sizeof(list[0]);
	arr(list, size);
	printf("Mang sau khi sap xep la: ");
	for(int i = 0; i < size; i++) {
		printf("%d ", list[i]);
	}
	
	return 0;
}
