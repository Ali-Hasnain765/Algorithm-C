#include<stdio.h>
int main(){
      int A[] = {9, 1, 4, 14, 4, 15, 6};
    int i,n = 7;


   /*int i, n, A[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&A[i]); */

   quicksort(A,0,6);

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",A[i]);

   return 0;
}              //A[25]
void quicksort(int A[],int left,int right){
   int i, j, pivot, temp;

   if(left<right){
      pivot=left;
      i=left;
      j=right;

      while(i<j){
         while(A[i]<=A[pivot])
         {
             i++;
         }
         while(A[j]>A[pivot])
         {
             j--;
         }
         if(i<j){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
         }
      }

      temp=A[pivot];
      A[pivot]=A[j];
      A[j]=temp;
      quicksort(A,left,j-1);
      quicksort(A,j+1,right);

   }
}

