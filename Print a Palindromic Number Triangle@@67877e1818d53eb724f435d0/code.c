// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,a=1;
    int r,rev=0,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<=i;j++){
            m=a;
            while(a>0){
                r=a%10;
                rev=(rev*10)+r;
                a=a/10;
            }
            if(m==rev){
                printf("%d ",m);
            }
        }
        printf("\n");
    }
}