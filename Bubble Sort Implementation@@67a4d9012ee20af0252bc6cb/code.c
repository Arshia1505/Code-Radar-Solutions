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
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
     
        }
    } 
    return 0;   
}
int printArray(int arr,int n){
    int i,j;
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}