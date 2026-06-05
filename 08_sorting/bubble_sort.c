#include<stdio.h>

void bubbleSort(int arr[], int size) {

    int comparisons = 0;
    int swaps = 0;

    for (int i = 0; i < size - 1; i++) {

        int swapped = 0;

        for (int j = 0; j < size - i - 1; j++) {

            comparisons++;

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swaps++;
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }

    printf("\nSorted Array:\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nTotal Comparisons: %d", comparisons);
    printf("\nTotal Swaps: %d\n", swaps);
}

int main() {

    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in the array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, size);

    return 0;
}
