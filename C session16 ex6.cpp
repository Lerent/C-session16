#include <stdio.h>

int arr(int *list, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (list[i] == value) {
            return i;
        }
    }
    return -1;
}
int main() {
    int list[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(list) / sizeof(list[0]);
    int valueToFind = 7;
    int position = arr(list, size, valueToFind);
    if (position != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", valueToFind, position);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", valueToFind);
    }

    return 0;
}

