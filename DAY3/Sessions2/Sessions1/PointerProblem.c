#include<stdio.h>
#include<stddef.h>


int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",ptr+i);
        printf("The value of %d element is: %d\n",i+1,*(ptr+i));
    }

    return 0;


}