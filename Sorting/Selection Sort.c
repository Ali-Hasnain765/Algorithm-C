#include<stdio.h>
int main()
{
    int i,j,min_pos,temp;
    int arr[10]={5,9,7,6,4,2,3,8,1,0};
    int length = 10;
    //i<length-1 because it will automatically sort the last digit.
    for(i=0;i<length-1;i++)
    {
        min_pos=i;
        for(j=i+1;j<length;j++){
             if(arr[j]<arr[min_pos]){ //for example if a[j]= 2 & a[min_pos]=4 then j will be min_pos.
                min_pos=j;
             }
        }
            //Getting out from for loop as it traversed 9 times.
             if (min_pos!=i)
                {
                temp=arr[i];
                arr[i]=arr[min_pos];
                arr[min_pos]=temp;
             }
    }
    for(i=0;i<length;i++){
        printf("the sorted element are %d\n",arr[i]);
    }

}
