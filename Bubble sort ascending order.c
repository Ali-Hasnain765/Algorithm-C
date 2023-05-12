#include<stdio.h>
int main ()
{

int c,d,n,swap,arr[100];
  printf("Enter num of element\n");
    scanf("%d",&n);
    printf("Enter the digits\n");
    for(c=0;c<n;c++)
        scanf("%d",&arr[c]);
        for(c=0;c<n;c++)
        {
            for(d=0;d<n-c-1;d++){
                if(arr[d]>arr[d+1])
                {
                    swap=arr[d];
                    arr[d]=arr[d+1];
                    arr[d+1]=swap;
                }
            }
        }
        printf("Sorted list are in ascending order\n");
        for(c=0;c<n;c++)
            printf("%d\n", arr[c]);
        return 0;
}
