#include<stdio.h>
#include<math.h>

int square_of_sum(int a){
  int x=0;
        for(a;a>=0;a--){
                x+=a;
        }
  x=pow(x,2);
  return(x);
}

int sum_of_squares(int a){
  int y=0;
        for(a;a>=0;a--){
                y+=pow(a,2);
        }
  return(y);
}

int main(){

  int n,diff=0;
           printf("Enter the number: ");
           scanf("%d",&n);
           diff=square_of_sum(n) - sum_of_squares(n);
           printf("The difference of %d and %d is %d ",square_of_sum(n),sum_of_squares(n),diff);
  return(0);

}
