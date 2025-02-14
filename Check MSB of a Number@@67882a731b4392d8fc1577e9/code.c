// Your code here...
#include<stdio.h>
int main(){
    int a,bits,msb;
    scanf("%d",&a);
    bits=sizeof(int)*8;
    msb=1 << (bits-1);
    if(a & msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}