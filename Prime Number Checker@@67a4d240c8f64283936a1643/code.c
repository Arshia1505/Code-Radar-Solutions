// Your code here...
int isPrime(int num){
    int i;
    int f=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            f++;
        }
    }
    if(num==1)
    return 0;
    if(num==2)
    return 1;
    if(f==0)
    return 1;
    else
    return 0;
}