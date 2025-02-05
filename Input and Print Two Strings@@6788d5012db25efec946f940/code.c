#include <stdio.h>
#include<string.h>
int main(){
char s[100];
gets(s);
int i=0;
while(s[i]!='\0'){
    if(s[i]==' '){
        printf(" and ");
    }
    else{
        printf("%c",s[i]);
    }
    i++;
}
return 0;
}