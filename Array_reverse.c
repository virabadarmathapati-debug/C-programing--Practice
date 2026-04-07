#include<stdio.h>
int main()
{
   int arr[20];
   int i,j,n;
   printf("enter array size: ");
   scanf("%d",&n);
   printf("Enter array elements: ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("Reversed Array elements are: ");
   for(i=n-1;i>=0;i--)
   {
      printf("%d ",arr[i]);
   }
  return 0;
}
