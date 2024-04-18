#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main()
{
    int f,s,t;
    printf("Enter 3 lists\n");
    printf("Enter number of elements in (first) list :");
    scanf("%d",&f);
    int a[f];
    printf("Enter the elements in it\n");
    for(int i=0;i<f;i++)
        scanf("%d",&a[i]);
    printf("Enter number of elements in (second) list :");
    scanf("%d",&s);
    int b[s];
    printf("Enter the elements in it\n");
    for(int i=0;i<s;i++)
        scanf("%d",&b[i]);
    printf("Enter number of elements in (third) list :");
    scanf("%d",&t);
    int c[t];
    printf("Enter the elements in it\n");
    for(int i=0;i<t;i++)
        scanf("%d",&c[i]);

   printf("\nConcatenate given 3 list into  1st array \n");
    concat(a,b,c,f,s,t);
     for(int i=0;i<(f+s+t);i++)
        printf("%d ",a[i]);

   printf("\nAppending 2nd array to 1st array at last\n");
    append(a,b,f,s);
    for(int i=0;i<(f+s);i++)
        printf("%d ",a[i]);

    printf("\nMultiply by 3 for each element in list 2 by using function\n");
    mapp(b,s);
    for(int i=0;i<s;i++)
        printf("%d ",b[i]);

    printf("\nCheck which elements are divisible by 2 in 1st list\n");
   int j=filter(a,f,2);
    for(int i=0;i<j;i++)
        printf("%d ",a[i]);


   printf("\nNumber of elements present in the list 3 is :");
    int k=0;
    c[t]='\0';
    while(c[k]!='\0')
       k++;
    printf("%d\n",k);

     printf("\nReverse the elements of list 2\n");
    rev(b,s);
    for(int i=0;i<s;i++)
        printf("%d ",b[i]);

    printf("\nFoldl operation after adding to 1st element \n");
    foldl(c,t,10);

    printf("\n\nFoldr operation after adding to last element\n");
    foldr(c,t,10);


    return 0;
}
