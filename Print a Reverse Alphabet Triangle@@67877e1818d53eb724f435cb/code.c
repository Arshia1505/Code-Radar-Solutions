// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    char ch;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        ch='A';
        for(j=i;j>0;j--){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}