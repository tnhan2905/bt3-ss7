#include <stdio.h>

int main() {
    int mang[5] = {2, 7, 12, 5, 8}; 
    int hasEven = 0; 

    printf("Cac phan tu la so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
            hasEven = 1;
        }
    }
    if (!hasEven) {
        printf("Mang in ra khong chua so chan.\n");
    } else {
        printf("\n"); 
    }

    return 0;
}
