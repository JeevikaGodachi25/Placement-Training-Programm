#include<stdio.h>
int main(){
    printf("Enter the number of rows: ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",'*');
       
        }
        for(int j=1;j<=2*(n-i);j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",'*');
       
        }

        printf("\n");
       
    }
    // for(int i=1;i<=2*n;i++){
    //     printf("%c ",'*');
    // }
    for(int i=n-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%c",'*');
       
        }
        for(int j=2*(n-i);j>=1;j--){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%c",'*');
       
        }

        printf("\n");
       
    }

    return 0;
}
