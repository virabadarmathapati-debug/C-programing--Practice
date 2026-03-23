#include<stdio.h>
int main()
{
       int ch,n,r,l,b,a,rev=0,flag,sum=0,i,j,rem;
   printf("----Menu----\n");
   printf("1.Sum of digits\n");
    printf("2.Palindrome\n");
     printf("3.Prime Number Check\n");
      printf("4.Reverse Number\n");
       printf("5.Area of Circle\n");
        printf("6.Area of Rectangle\n");
         printf("7.GCD \n");
    printf("8.Factorial of a number\n");
     printf("9.Fibonacci Series\n");
    printf("10.Prime number upto N\n");
    
    printf("Enter a choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:{
      printf("enter numbers: ");
      scanf("%d",&n);
      while(n!=0)
      {
          sum=sum+n%10;
          n=n/10;
          }
          printf("Sum of Digits=%d ",sum);
          break;
          }
       case 2:{
       printf("enter a number: ");
       scanf("%d",&n);
       int temp=n;
       while(n!=0)
       {
         rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        }
        if(temp==rev)
        {
          printf("Palindrome");
          }
          else
          {
           printf("Not palindrome");
           }
           break;
           }
        case 3:{
        printf("enter a number: ");
       scanf("%d",&n);
       int flag=0;
       for(int i=2;i<=n/2;i++)
       {
       if(n%i==0)
       {
       flag=1;
       }
       break;
       }
       if(flag==0)
       {
       printf("Prime");
       }
       else
       {
        printf("Not prime");
        }
        break;
        }
    case 4:{
    printf("enter a number: ");
       scanf("%d",&n);
       while(n!=0)
       {    rem=n%10;
         rev=rev*10+rem;
         n=n/10;
         }
         printf("Reverse number is %d",rev);
         break;
         }
      case 5:{
      printf("enter radius value ");
       scanf("%d",&r);
       float area=r*r*3.142;
       printf("Area of circle = %f",area);
       break;
       }
       case 6:{
       printf("enter length and bredth ");
       scanf("%d%d",&l,&b);
        printf("Area of Recatangle = %d",l*b);
        break;
        }
        case 7:{
        printf("enter two numbers: ");
       scanf("%d%d",&a,&b);
        while(a!=b)
        {
        if(a>b)
        {
        a=a-b;
        }
        else
        {
        b=b-a;
        }
        }
        printf("GCD =%d",a);
        break;
        }
    case 8:{
    printf("enter a number: ");
       scanf("%d",&n);
      int fact=1;
      for(i=1;i<=n;i++)
      {
      fact=fact*i;
      }
      printf("Factorial =%d",fact);
      break;
      }
    case 9:{
    printf("enter a number: ");
       scanf("%d",&n);
       int a=0,b=1;
       for(i=1;i<=n;i++)
       {
       printf("%d",a);
       int c=a+b;
       a=b;
       b=c;
       }
       break;
       }
       case 10:{
       printf("enter a number: ");
       scanf("%d",&n);
       for(i=2;i<=n;i++)
       {
        flag=0;
        for(int j=2;j<=i/2;j++)
        {
        if(i%j==0)
        {
        flag=1;
        break;
        }
        }
        if(flag==0)
        {
        printf("%d",i);
        }
        }
        break;
        }
        
        default:{
        printf("Inivalid choice");
        
        }
        
        }
        return 0;
        
        }  
