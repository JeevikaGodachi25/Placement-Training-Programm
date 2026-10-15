#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    // int x=10;
    // int *p=&x;
    int (*ptr)(int ,int)=add;
    printf("The sum is: %d\n",ptr(10,20));
    return 0;
}