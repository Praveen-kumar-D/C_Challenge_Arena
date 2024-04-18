#include <stdio.h>
int main()
 {
    int num, i,sum=0;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("The factors of %d are:",num);
    for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("%d ", i);
                sum+=i;
            }
        }

    if(sum==num)
    {
        printf("\n%d is a Perfect number.",num);
    }
    else if(sum>num)
    {
         printf("\n%d is an Abundant number.",num);
    }
    else
    {
         printf("\n%d is a Deficient number.",num);
    }

    return 0;
}
