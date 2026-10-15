#include<stdio.h>
int main(){
    int  input;
    scanf("%d",&input);
    int notes[]={100,50,20,10,5,2,1};
    int q,i,count=0;
    int size=sizeof(notes)/sizeof(int);
    for(int i=0;i<size;i++){
        int q=input/notes[i];
        input=input%notes[i];
        count+=q;
       
    }
    printf("%d",count);


    return 0;
}