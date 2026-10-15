#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[3][3]={
        {1,2,3},{4,5,6},{7,8,9}
    };
    int index=0;
    int result[9];
    int bottom =2,left=0,top=0,right=2;
    for(int i=0;i<=3;i++){
        if(bottom>=top){
            for(int j=right;j>=top;j--){
                result[index++]=arr[j][top];
            }
            top++;
        }

        //if()
        // if(bottom>=top){
        //     for(int j=left;j>=top;j--){
        //         result[index++]=arr[bottom][j];
        //     }
        //     left--;
        // }



    }
    for(int i=0;i<9;i++){
        printf("%d",result[i]);
    }
    return 0;

}