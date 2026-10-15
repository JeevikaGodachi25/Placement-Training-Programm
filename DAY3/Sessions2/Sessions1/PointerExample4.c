#include<stdio.h>
int main(){
    int x=10;
    int *const p=&x;
    printf("Value of x: %d\n",x);
    *p=20;
    
    printf("Value of x : %d\n",x);
    return 0;
}