// Your code here...
#include<stdio.h>
int main(){
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(cp>sp){
        printf("Loss");
    }
    if(sp>cp){
        printf("Profit");
    }
    return 0;
}