#include<stdio.h>
#include<stdlib.h>

int main () {

    int *arr;
    int n , new_size , i ;

    printf("Enter initial size: ");
    if (scanf("%d",&n) != 1 || n <= 0) {
        printf("Invalid size!\n");
        return 1;
    }

    arr = malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0 ; i < n; i++){
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input!\n");
            free(arr);
            return 1;
        }
    }

    printf("Enter new size: ");
    if (scanf("%d", &new_size) != 1 || new_size <= 0) {
        printf("Invalid new size!\n");
        free(arr);
        return 1;
    }

    int *temp = realloc(arr, new_size * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(arr);
        return 1;
    }
    arr = temp;

    if (new_size > n){
        printf("Enter %d new elements: ", new_size - n);
        for (i = n; i < new_size; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                printf("Invalid input!\n");
                free(arr);
                return 1;
            }
        }
    }

    printf("Array Elements:\n");
    for (i = 0; i < new_size; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);

    return 0;
}
