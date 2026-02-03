#include <stdio.h>

int main() {
    int row, col, row1, col2;
    scanf("%d%d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d%d", &row1, &col2);
    int arr2[row1][col2];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    if (col != row1) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int arr3[row][col2];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col2; j++) {
            arr3[i][j] = 0;
            for (int k = 0; k < col; k++) {
                arr3[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
