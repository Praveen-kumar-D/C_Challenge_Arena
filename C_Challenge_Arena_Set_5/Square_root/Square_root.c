#include<stdio.h>
#include<conio.h>

int main()
{
  float i,n;
	     printf("Enter the Number:");
	     scanf("%f",&n);
	   for(i=0.01;i*i<n;i=i+0.01);
            printf("\n%.2f",i);
  return(0);

}
