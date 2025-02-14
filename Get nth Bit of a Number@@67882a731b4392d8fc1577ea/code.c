// Your code here...
#include<stdio.h>
int main(){
    int a,n;
    int bit;
    scanf("%d %d",&a,&n);
    bit=(a>>n)&1;
    printf("%d",bit);
    return 0;
}