#include<stdio.h>
int main(){
    int x = 10;
    int *ptr = &x;
    int *ptr2=NULL;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)ptr2);//void support all data type.
    //printf("Value at address stored in ptr: %d\n", *ptr);
    return 0;
}