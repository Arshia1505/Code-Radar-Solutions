// Your code here...
#include<stdio.h>
int main(){
    int a;
    int i,s,c=0;
    scanf("%d",&a);
    s=sizeof(int)*8;
    for(i=0;i<s;i++){
        if((a>>i)&1){
            break;
        }
        c++;        
    }
    printf("%d",c);
    return 0;
}