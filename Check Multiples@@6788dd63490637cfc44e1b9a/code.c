// Your code here...
#include<stdio.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    if(n%d==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}