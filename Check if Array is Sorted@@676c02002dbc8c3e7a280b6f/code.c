#include <stdio.h>
int isSorted(int arr[],int n){
    for(int i = 1;i < n;i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter the number of elements: ")
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n)
    for(int i = 0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array:");
    for(int i = 0; i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    if(isSorted(arr,n)){
        printf("Sorted\n");
    }else{
        printf("Not Sorted\n");
    }
    return 0;
}