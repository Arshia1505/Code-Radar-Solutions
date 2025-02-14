// Your code here...
#include<stdio.h>
int main(){
    int a;
    int msb,i,c=0;
    scanf("%d",&a);
    int s=sizeof(int)*8;
    msb=1<<(s-1);
    for(i=0;i<s;i++){
        if((n<<i)&msb){
            break;
        }
        c++;
    }
    printf("%d",c);
    return 0;
}