// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%5 && n%11)
    printf("Divisible");
    else
    printf("Not Divisible");
    return 0;
}