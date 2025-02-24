// Your code here...
// #include<stdio.h>
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     bubbleSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }

void bubbleSort(int arr[], int n) {
    int i, j, t;
    for(i = 0; i < n - 1; i++) {
        for(j = i+1; j < n ; j++) {
            if(arr[i] > arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}