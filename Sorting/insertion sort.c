


//C Program to sort an array in ascending order using Insertion Sort */
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int arr[8]={8,4,9,5,7,6,3,2};
    /*printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    */
  for(i=1;i<8;i++)
{
    temp=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>temp)
    {
        arr[j+1]=arr[j];
        j--;
    }
    //arr[j+1]=temp;
}
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
