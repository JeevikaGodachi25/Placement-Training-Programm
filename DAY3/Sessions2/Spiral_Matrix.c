// #include<stdio.h>
// int * logic(int **matrix){
//     int top=0,bottom=2,right=2,left=0;
//     int result[3*3];
//     int *spiral=result;
//     int index=0;
//     for(int i=0;i<3*3;i++){
//         if(top<=bottom){
//             for(int j=left;j<=right;j++){
//                 *(spiral+index++)=matrix[top][j];
//             }
//             top++;
//         }
//         if(left<=right){
//             for(int j=top;j<=bottom;j++){
//                 *(spiral+index++)=matrix[j][right];
//             }
//             right--;
//         }
//         if(top<=bottom){
//             for(int j=right;j>=left;j--){
//                 spiral[index++]=matrix[bottom][j];
//             }
//             bottom--;
//         }
//         if(left<=right){
//             for(int j=bottom;j>=top;j--){
//                 spiral[index++]=matrix[j][left];
//             }
//             left++;
//         }
//     }
//     return &spiral;
    
// }
    
// int main(){
//     int arr[3][3]={
//         {1,2,3},{4,5,6},{7,8,9}
//     };
//     int *matrix=arr;
//     int *result=logic(&matrix);
//     for(int i=0;i<9;i++){
//         printf("%d",*(result+i));
//     }
//     return 0;

// }
#include <stdio.h>
#define N 3

// Return the spiral array using a pointer
int *spiralPrint(int **matrix, int matrixSize,
                 int *matrixColSize, int *returnSize)
{

    int top = 0;
    int bottom = N - 1;
    int left = 0;
    int right = N - 1;
    int k = 0;

    static int result[N * N];

    while (top <= bottom && left <= right)
    {

        // 1. Left to right
        for (int i = left; i <= right; i++)
        {
            result[k++] = matrix[top][i];
        }
        top++;

        // 2. Top to bottom
        for (int i = top; i <= bottom; i++)
        {
            result[k++] = matrix[i][right];
        }
        right--;

        // 3. Right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                result[k++] = matrix[bottom][i];
            }
            bottom--;
        }

        // 4. Bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                result[k++] = matrix[i][left];
            }
            left++;
        }
    }

    *returnSize = k;
    return result;
}

int main()
{
    int data[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int *matrix[N];

    for (int i = 0; i < N; i++)
    {
        matrix[i] = data[i];
    }

    int matrixColSize[N] = {N, N, N};
    int returnSize = 0;

    int *result = spiralPrint(
        matrix, N, matrixColSize, &returnSize);

    // Print spiral array
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}