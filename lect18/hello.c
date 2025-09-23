#include<stdio.h>
int main (){
    //####### sum row wise########### 

//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int sum=0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum=sum+arr[i][j];
//                 }
// } printf("%d",sum);

// ########## column wise ##########

//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int sum=0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum=sum+arr[j][i];
//                 }
// } printf("%d",sum);

// }
    // for (int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
 
    //########## 2D to 1D ###########

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int newarr[9];
int k=0;
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
            newarr[k]=arr[i][j];
            k++;
             printf("%d",k);

         }
        }   

    }

