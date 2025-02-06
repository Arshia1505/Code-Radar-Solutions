#include <stdio.h>
int main(){
    int a,b,c,s;
    double avg;
    scanf("%d %d %d",&a,&b,&c);
    s=a+b+c;
    avg=s/3;
    printf("Average: %lf",avg);
    return 0;
}