// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&c);
    switch(ch){
        case '+':
        printf(a+b);
        break;
        case '-':
        printf(a-b);
        break;
        case '*':
        printf(a*b);
        break;
        case '/':
        printf(a/b);
        break;
    }
    return 0;
}