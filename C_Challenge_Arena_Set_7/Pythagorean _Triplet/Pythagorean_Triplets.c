#include <stdio.h>
#include <stdlib.h>

void triplets(int num)
{

    int a, b, c = 0;
    int m = 2;
    printf("The Pythagorean triplets of %d are : ",num);
    while (c < num) {
        for (int n = 1; n < m; ++n){
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;

            if (c > num)
                break;
        if((a+b+c)==num)
            printf("%d %d %d\n", a, b, c);
        }
        m++;
    }
}
int main()
{

  int n;
       printf("Enter the number: ");
       scanf("%d",&n);
       triplets(n);
  return 0;

}
