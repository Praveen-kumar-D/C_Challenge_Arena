#include <stdio.h>

int main()
{

  int low,high,mid,N,n,a[100];
         printf("enter the number of elements: ");
         scanf("%d",&N);
         printf("enter the %d elements: ",N);
       for(int i=0;i< N;i++){
            scanf("%d",&a[i]);
            }
         printf("enter the element to be searched: ");
         scanf("%d",&n);
  low = 0;
  high = n - 1;
  mid = (low+high)/2;
       while (low <= high){
            if(a[mid] == n){
                printf("%d found at location %d", n, mid);
                break;
                }
            else if(a[mid]< n){
                low=mid+1;
                }
            else
                high = mid - 1;
                mid = (low + high)/2;
                }
      if(low > high)
        printf("%d isn't present in the list", n);
  return 0;

}

