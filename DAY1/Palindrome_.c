#include<stdio.h>
bool isPalindrome(int x) {
    int original=x;
    
    if(x<0){
        return false;
    }
    long  reverse=0;
    while(x>0){
        int rem=x%10;
        reverse= reverse*10+rem;
        x=x/10;
    }
    return reverse==original;
   
}
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(isPalindrome(x)){
        printf("%d is a palindrome number.\n",x);
    }else{
        printf("%d is not a palindrome number.\n",x);
    }
    return 0;
}