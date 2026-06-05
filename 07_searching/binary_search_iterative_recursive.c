#include<stdio.h>

int iterativeBinarySearch (int arr[],int size , int target){
    int left = 0 ;
    int right = size - 1;

    while (left <= right ){
        int mid = left + (right - left ) / 2;
        if ( arr[mid] == target ){
            return mid;
        } else if (arr[mid]<target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
 return -1;
}

int recursiveBinarySearch(int arr[],int left,int right, int target){
    if (left > right){
        return -1;
    }
    int mid = left + (right - left)/2;
    if (arr[mid]==target){
        return mid;
    } else if (arr[mid]<target){
        return recursiveBinarySearch(arr,mid +1,right,target);
    } else {
        return recursiveBinarySearch(arr ,left ,mid - 1,target);
    }
}



int main () {


    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter a sorted array : ");
    for (int i = 0 ; i < n ;i++){
        scanf("%d",&arr[i]);
    }

    int target ;
    printf("Enter target : ");
    scanf("%d",&target);

    int iterativeResult = iterativeBinarySearch(arr , n , target);

    if (iterativeResult != -1){
        printf("iterative element found at index %d\n",iterativeResult);
    } else {
        printf("iterative element not found \n ");
    }

    int recursiveResult = recursiveBinarySearch(arr,0,n-1,target);

    if (recursiveResult != -1){
        printf ("Recursive elemement found at index %d\n",recursiveResult);
    } else {
        printf("recursive element not found \n ");
    }

    return 0;
}
