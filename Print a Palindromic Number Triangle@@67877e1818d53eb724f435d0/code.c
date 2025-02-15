// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,a=1;
    int r,rev=0,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<=i;j++){
            m=a;
            while(m>0){
                r=m%10;
                rev=(rev*10)+r;
                m=m/10;
            }
            if(a==rev){
                printf("%d ",m);
            }
        }
        a++;
        printf("\n");
    }
}