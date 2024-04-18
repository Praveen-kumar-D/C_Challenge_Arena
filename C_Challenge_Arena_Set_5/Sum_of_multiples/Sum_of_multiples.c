#include<stdio.h>
#include<math.h>

int sum(int *p,int b,int n){

  static int y[50];
        for(int i=1;i<b;i++){
                for(int j=0;j<n;j++){
                    if(i% *(p+j)==0){
                        y[i] = i;
        }
   }

}
   return(y);
}

int main(){

  int a[10],n,N,s=0;
  int *z;
           printf("Enter the number of elements in array :");
           scanf("%d",&n);
           printf("Enter the limit:");
           scanf("%d",&N);
           printf("Enter the numbers whose multiples need be to found: ");
         for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
                }
  z=sum(a,N,n);
    printf("The multiples are: ");
         for(int j=0;j<50;j++){
                if(*(z+j)!=0){
                    s+=*(z+j);
                    printf("%d\t ",*(z+j));
         }
    }
    printf("\nThe sum is %d",s);
  return(0);

}
