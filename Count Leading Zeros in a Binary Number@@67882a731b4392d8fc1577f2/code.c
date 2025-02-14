// Your code here...
#include<stdio.h>
int main(){
    int a,s;
    int msb=1,i,c=0;
    scanf("%d",&a);
     s=sizeof(int)*8;
    msb=1<<(s-1);
    for(i=0;i<s;i++){
        if((a<<i)&msb){
            break;
        }
        c++;
    }
    printf("%d",c);
    return 0;
}