// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    int a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i%2==0){
            a=0;
            b=1;
        }
        else{
            a=1;
            b=0;
        }
        for(j=0;j<=i;j++){
            if(j%2==0){
                printf("%d",a);
            }
            else{
                printf("%d",b);
            }
        }
        printf("\n");
    }
    return 0;
}