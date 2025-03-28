#include <stdio.h>
intSorted(int arr[],int n){
    for(int i = 1;i < n;i++){
        if(arr[i]<arr[j-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n ; i++){
        scanf("%d",arr[i]);
    }
    if(sorted(arr,n)){
        printf("Sorted\n");
    }else{
        printf("Not Sorted\d");
    }
    return 0;
}