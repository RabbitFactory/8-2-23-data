#include <stdio.h>

int main() {
    int N = 7, K = 3, Value = 100;
    int array[N], i, j;

    printf("Enter elements of the array: \n");
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    N++;

    for (i = N-1; i > K-1; i--) {
        array[i] = array[i - 1];
    }

    array[K-1] = Value;

    printf("Array after inserting %d at position %d: \n", Value, K);
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
