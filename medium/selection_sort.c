
#include <stdio.h>

void selectionsort(int* arr,int size){


for(int i = 0 ; i < size-1 ; i++) {
     
    int minIndex = i;
    
    for (int j = i + 1; j < size ;j++  ){
    
     if (arr[j]< arr[minIndex]){
        minIndex = j;
     }
      
    }
      
      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
      
      
      }
      
   
}


int main () {
 
 int size ;
 printf("Enter size of the array : ");
 scanf("%d",&size);
 
 int arr[size];
 
 printf("Enter the elements of the array : ");
 
 for (int i = 0; i < size ;i++){
     scanf("%d",&arr[i]);
 }

selectionsort(arr,size);

printf("sorted array : ");
 for (int k = 0; k < size ; k++){
         printf("%d ",arr[k]);        
  }


return 0;
}
