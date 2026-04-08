#include <stdio.h>

int main() {
    int n = 5;
    int arr[5][5];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {

        // Fill top row
        for (int i = left; i <= right; i++)
            arr[top][i] = num++;
        top++;

        // Fill right column
        for (int i = top; i <= bottom; i++)
            arr[i][right] = num++;
        right--;

        // Fill bottom row
        for (int i = right; i >= left; i--)
            arr[bottom][i] = num++;
        bottom--;

        // Fill left column
        for (int i = bottom; i >= top; i--)
            arr[i][left] = num++;
        left++;
    }

    // Print the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}