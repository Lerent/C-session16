#include <stdio.h>

void Them(int list[], int *n, int value, int position) {
    if (position < 0 || position > *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    for (int i = *n; i > position; i--) {
        list[i] = list[i - 1];
    }
    list[position] = value;
    (*n)++;
}
int main() {
    int list[] = {10, 20, 30, 40, 50};
    int n = 5;
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
    int value = 25;
    int position = 2;
    Them(list, &n, value, position);
    printf("Mang sau khi them %d vao vi tri %d: ", value, position);
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}

