#include<stdio.h>
int print(int n){
    if(n>100){
        return n-10;
    }
    else{
        return print(print(n+11));
    }
    // return 0;
}
int main(){

    printf("%d",print(100));
    return 0;
}