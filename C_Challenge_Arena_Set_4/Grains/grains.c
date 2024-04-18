#include <stdio.h>
#include <stdlib.h>
#include<math.h>

double grains(int);
int main(){

  int i;
  double s=0;
      for(i=0;i<64;i++){
            s+=grains(i);
      }
      printf("Total grains = %.0f\n",s);
  return(0);
}

double grains(int x){
  double n;
  n=1ULL<<x;
    printf("Grains on square %d = %.0f\n",(x+1),n);
  return(n);
}
