// Your code here...
#include<stdio.h>
int main(){
    int a,n;
    int num;
    scanf("%d %d",&a,&n);
    num= a&(~(1<<n));
    printf("%d",num);
}