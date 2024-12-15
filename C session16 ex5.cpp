#include <stdio.h>

void arr(int *list, int size, int newValue, int location) {
    if (location < 0 || location >= size) {
        printf("Vi tri cap nhat khong hop le!\n");
        return;
    }
    list[location] = newValue;
}
int main() {
    int list[] = {1, 2, 3, 4, 5};
    int size = sizeof(list) / sizeof(list[0]);
    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
    int newValue = 7;
    int location = 2;
    arr(list, size, newValue, location);
    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}

