// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("A");
        }
        printf("\tB");
    }
    return 0;
}