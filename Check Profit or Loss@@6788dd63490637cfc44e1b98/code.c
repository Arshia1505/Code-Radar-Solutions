// Your code here...
#include<stdio.h>
int main(){
    int cp,sp;
    int loss,profit;
    scanf("%d %d",&cp,&sp);
    if(cp>sp){
        loss=cp-sp;
        printf("%d",loss);
    }
    if(sp>cp){
        profit=sp-cp;
        printf("%d",profit);
    }
    return 0;
}