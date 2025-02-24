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
int bubbleSort(int arr,int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=1;j<n;j++){
            if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
     
        }
    } 
    return 0;   
}
int printArray(int arr,int n){
    int i,j;
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}