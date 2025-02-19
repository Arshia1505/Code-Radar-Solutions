// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    int i;
    scanf("%d %d %d",&a,&b,&c);
    int max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    printf("%d",max);
    return 0;
}