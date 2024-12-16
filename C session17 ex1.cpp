#include <stdio.h>
#include <stdlib.h>

void nhapMang(int **list, int *size) {
    printf("Hay nhap so phan tu cua mang: ");
    scanf("%d", size);
    *list = (int *)malloc((*size) * sizeof(int));

    if (*list == NULL) {
        printf("Khong the cap phat bo nho\n");
        exit(1);
    }

    for (int i = 0; i < *size; i++) {
        printf("Hay nhap phan tu thu %d: ", i + 1);
        scanf("%d", &(*list)[i]);
    }
}
void show(int *list, int size) {
    if (size == 0) {
        printf("Mang trong.\n");
        return;
    }
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}
void Dai(int size) {
    printf("Do dai cua mang la: %d\n", size);
}
void tongMang(int *list, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += list[i];
    }
    printf("Tong cac phan tu trong mang la: %d\n", sum);
}
void Big(int *list, int size) {
    if (size == 0) {
        printf("Mang rong.\n");
        return;
    }

    int max = list[0];
    for (int i = 1; i < size; i++) {
        if (list[i] > max) {
            max = list[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
}

int main() {
    int *list = NULL;
    int size = 0;
    int choice;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai cua mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(&list, &size);
                break;
            case 2:
                show(list, size);
                break;
            case 3:
                Dai(size);
                break;
            case 4:
                tongMang(list, size);
                break;
            case 5:
                Big(list, size);
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, hay nhap lai\n");
        }
    } while (choice != 6);
    if (list != NULL) {
        free(list);
    }

    return 0;
}

