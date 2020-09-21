#include <stdio.h>
#include "das.h"

int insertion_sort(int *, int);

int main() {
    int a[100], n, count;
    printf("Enter The number:");
    scanf("%d", &n);
    array_insert(a, n);
    display(a, n);
    count = insertion_sort(a, n);
    display(a, n);
    printf("%d swaps required to perform the insertion sort.", count);
    return 0;


}

int insertion_sort(int *arr, int n) {
    int i, j, key, count = 0;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            count++;
            j = j - 1;
        }
        arr[j + 1] = key;

    }
    return count;
}
