#include<stdio.h>
int main(){
    int arr[2][3]={{10,20,30},{40 ,50 ,60}};
    int (*ptr)[3]=arr;
    // printf("%d",ptr[1][2]);
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<=3;j++){
            printf("%d\n",*(*(arr+1)+1));
    //     }
    // }
    return 0;
}
