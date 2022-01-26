#include <stdio.h>
#include <math.h>

int main() {
    int massiv[7] = {23, 5678, 2, 564, 365, 77, 443}; // массив
    
    // вывод массива
    for (int i = 0; i < 7; i++) {
        printf("%d: ", i+1);
        printf("%d\n", massiv[i]);
    }
    
    
    int A[2][2], B[2][2], C[2][2]; // целочисленные матрцы 2х2
        
    // ввод первой матрицы
    printf("Ввод первой матрицы:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]); 
        }
    }
    
    // ввод второй матрицы
    printf("Ввод второй матрицы:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]); 
        }
    }
    
    // умножение двух матриц
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = (A[i][0] * B[0][j]) + (A[i][1] * B[1][j]);
        }
    }
    
    // вывод полученной матрицы
    printf("Результат умножения:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}

