#include<stdio.h>
#include<math.h>

int main()
{

  float a,b,c;
          printf("Enter the three sides: ");
          scanf("%f %f %f",&a,&b,&c);
       if(a>0 && b>0 && c>0 && (a+b>=c || b+c>=a || c+a>=b)){
            if(a==b && a==c && b==c){
                printf("The triangle is: Equilateral triangle");
       }
       else if(a==b||a==c||b==c){
            printf("The triangle is: Isosceles triangle");
       }
       else {
            printf("The triangle is: Scalene triangle");
            }
       }
       if(a+b==c || b+c==a || c+a==b){
            printf(" and it is a degenerate triangle");
       }

  return(0);

}

