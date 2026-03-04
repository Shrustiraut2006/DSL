#include <stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if(r1 == r2 && c1 == c2) {
        printf("\nAddition:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }

        printf("\nSubtraction:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                c[i][j] = a[i][j] - b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nAddition and Subtraction not possible\n");
    }

    if(c1 == r2) {
        printf("\nMultiplication:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                c[i][j] = 0;
                for(k = 0; k < c1; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMultiplication not possible\n");
    }

    return 0;
}
