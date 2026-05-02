#include<stdio.h>

int LinearSearch(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {

    int size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;

    printf("Enter element to find the index: ");
    scanf("%d", &target);

    int linresult = LinearSearch(arr, size, target);

    if (linresult != -1) {
        printf("Element found at index %d\n", linresult);

    } else {
        printf("Element not found\n");
    }

    return 0;
}
