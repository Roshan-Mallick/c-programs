#include<stdio.h>

int main () {

  int n ;
  printf("Enter number of elements : ");
  scanf("%d",&n);

  if (n < 2)  {
      printf("need at least 2 numbers \n");
      return 0;
  }

  int arr[n];

  printf("Enter %d number : ",n);
  for (int i = 0; i < n ; i++) {
      scanf("%d",&arr[i]);
  }

  int largest , largest_2nd ;

  if (arr[0]>arr[1]){
      largest = arr[0];
      largest_2nd = arr[1];
  } else {
      largest = arr[1];
      largest_2nd = arr[0];
  }


  for (int i = 2 ; i < n ; i++){
      if (arr[i]>largest){
          largest_2nd = largest;
          largest = arr[i];
      }  else  if (arr[i]>largest_2nd && arr[i] != largest) {
          largest_2nd=arr[i];
      }
  }


  printf("Largest : %d\n",largest);

  if (largest_2nd == largest) printf("No second largest.\n");
  else printf("Second Largest : %d \n",largest_2nd);

    return 0;
}
