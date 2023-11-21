#include <stdio.h>

void printArray(int a[][3] ){
    int i;
    int j;

    for (i = 0; i <= 1; ++i) {
        for (j = 0; j <= 2; ++j) {
        printf("%d ", a[i][j]);
        }
        printf("\n"); // start new line of output 
        }
}

void flipArray(int a[][3])
{
    int i;
    int j;
    for (i = 0; i <= 1; ++i) {
        for (j = 0; j <= 2; ++j) {
        int temp = a[i][j];
        a[i][j] = a[j][i];
        a[j][i] = temp;
        }
    }
}

int main()
{
    int A[2][3] = {1, 2, 3, 4, 5, 6};
    int B[2][3];
    printArray(A);
    flipArray(A);
    printArray(A);

}