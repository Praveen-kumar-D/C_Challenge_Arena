#include <stdio.h>

int NthPrime(int n)
{

  int i,j,count=0,flag=0;
        for(i=2; i>0; i++){
                flag=0;
              for(j=2; j<i; j++){
                    if(i%j==0){
                        flag=1;
                       break;
              }
      }
        if(flag==0){
            count++;
            }
        if(count==n){
                printf("%dth Prime Number is: %d\n",n,i);
                break;
        }
    }
}
int main()
{

  int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    NthPrime(n);

    return 0;
}
