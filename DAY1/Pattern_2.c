#include<stdio.h>
int main(){
    printf("Enter the number of rows: ");
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c ",'*');
        }
        printf("\n");
    }
    return 0;
}