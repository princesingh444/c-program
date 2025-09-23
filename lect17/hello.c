#include<stdio.h>
int main()
{
int arr[]={1,2,3,4,5};
int *p=arr;
for (int i = 0; i <5 ; i++)
{
printf("%d",*p);
*p++;
}
}


//   int sum(int *x,int *y){
//  *x=50;
//  *y=50;
//     int c=(*x)+(*y);
//     return c;
//   }
//   int main (){
//   int x=10;
//   int y=20;
//   int data=sum(&x,&y);
//   printf("%d",data);
//     printf("%d",x+y);

