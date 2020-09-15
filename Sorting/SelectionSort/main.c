#include <stdio.h>
#include "selectionsort.h"

void display(int *, int n);

int main() {
    printf("Sample Program of Selection Sort\n");
    int n, a[100], i;
    printf("\n Enter the Number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("\nEnter The Number at position %d:", i);
        scanf("%d", &a[i]);
    }
    printf("\nThe array is: ");
    display(a, n);
    printf("\nThe Sorted Array is:\n");
    selectionsort(a, n);
    display(a, n);
    return 0;
}

void display(int *arr, int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
}

