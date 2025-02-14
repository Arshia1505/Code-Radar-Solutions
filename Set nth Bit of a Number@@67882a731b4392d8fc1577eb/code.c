// Your code here...
#include<stdio.h>
int main(){
    int a,n;
    int num;
    scanf("%d %d",&a,&n);
    num=(1<<n)|a;
    printf("%d",num);
    return 0;
}