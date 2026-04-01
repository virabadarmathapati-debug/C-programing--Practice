#include<stdio.h>
int main()
{
   int i,j,num=1,n;
   printf("Enter range: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n-i;j++)
   {
     printf(" ");
   }
     for(j=1;j<=i;j++)
     {
        printf("%d ",num);
        num++;  
     }
     printf("\n");
   }
   return 0;
}
