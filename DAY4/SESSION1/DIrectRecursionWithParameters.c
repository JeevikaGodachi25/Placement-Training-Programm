#include<stdio.h>
void print(int n){
    if(n>5){
        return ;
    }
    print(n+2);
    printf("%d",n);
}
int main(){
    print(1);
    return  0;
}