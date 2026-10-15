#include<stdio.h>
int eatingSpeed(int bunches[],int size,int hr){
    int left=1;
    int right=0;
    for(int i=0;i<size;i++){
        if(bunches[i]>right){
            right=bunches[i];
        }
    }
    int speed=right;
    while(left<=right){
        int mid=(left+right)/2;
        int totalHours=0;
        for(int i=0;i<size;i++){
            totalHours+=(bunches[i]+mid-1)/mid;
        }
        if(totalHours>hr){
            left=mid+1;
        }
        else{
            speed=mid;
            right=mid-1;
        }
    }
    
    return speed;
}
int main(){
    int hr=8;
    int Bunches[]={3,6,7,11};
    int size=sizeof(Bunches)/sizeof(int);
    int speed =eatingSpeed(Bunches,size,hr);
    printf("The minimum eating speed is: %d\n",speed);
    return 0;
}
