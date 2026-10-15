#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char village[100];
    int pincode;
}Address;
typedef struct{
    int mem_ID;
    char name[100];
    double shar_cap;
    Address address;
}Member;


Member *allocateMemory(int n){
    Member *mem=(Member*)malloc(n*sizeof(Member));
    return mem;
}
void readMemory(Member *mem,int n){
    for(int i=0;i<n;i++){
        scanf("%d",&mem[i].mem_ID);
        scanf("%s",mem[i].name);
        scanf("%lf",&mem[i].shar_cap);
        scanf("%s",mem[i].address.village);
        scanf("%d",&mem[i].address.pincode);
    }
}
double sumShareCapital(Member *mem,int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+= mem[i].shar_cap;
    }
    return sum;

}
int HighestHolder(Member *mem, int n){
    double max=mem[0].shar_cap;
    int index=0;
    for(int i=1;i<n;i++){
        if(mem[i].shar_cap>max){
            max=mem[i].shar_cap;
            index=i;
        }
    }
    return index;
}
void printMemory(Member * mem ,int n,double total,int max_index){
    printf("MEMBER LEDGER\n");
    for(int i=0;i<n;i++){
        printf("%d ",mem[i].mem_ID);
        printf("%s ",mem[i].name);
        printf("%lf ",mem[i].shar_cap);
        printf("%s ",mem[i].address.village);
        printf("%d ",mem[i].address.pincode);
        printf("\n");
    }
    printf("Total share capital (Rs): %f",total);
    printf("Highest holder :\n");
    printf("%d",mem[max_index].mem_ID);
    printf("%s",mem[max_index].name);
    printf("%lf",mem[max_index].shar_cap);
    printf("%s",mem[max_index].address.village);
    printf("%d",mem[max_index].address.pincode);

}

int  main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("invalid count ");
        return 0;
    }
    Member *mem=allocateMemory(n);
    readMemory(mem,n);
    double Total_sc=sumShareCapital(mem,n);
    
    int max_index=HighestHolder(mem,n);
    printMemory(mem,n,Total_sc,max_index);
    free(mem);
    return 0;
}