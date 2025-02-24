// Your code here...
void isPrime(int num){
    int i;
    int f=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            f++;
        }
    }
    if(f==0)
    return 1;
    else
    return 0;
}