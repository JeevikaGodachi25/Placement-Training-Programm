#include <stdio.h>
bool isPowerOfTwo(int n) {
    if(n<=0){
        return false;
    }
    else{
        while(n%2==0){
            n=n/2;
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(isPowerOfTwo(n)){
        printf("%d is a power of two.\n",n);
    }else{
        printf("%d is not a power of two.\n",n);
    }
    return 0;
}