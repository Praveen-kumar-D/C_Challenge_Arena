#include<stdio.h>
//printing pascals triangle

int factorial(int n)
{
    if(n==1 || n==0){
    return(1);
    }
  return n*factorial(n-1);
}

int nCr(int n,int r)
{
  return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{

  int n,i,j,k;
       printf("Enter the number of rows: ");
       scanf("%d",&n);

      for(i=0;i<n;i++){
            for(j=n-i;j>0;j--){
                printf(" ");
      }

      for(k=0;k<=i;k++){
            printf("%d ",nCr(i,k));
      }
       printf("\n");
       }
  return 0;

}

