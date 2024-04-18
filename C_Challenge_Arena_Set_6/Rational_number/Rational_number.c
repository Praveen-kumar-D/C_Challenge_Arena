#include<stdio.h>
#include<math.h>

int gcd(int a,int b)
{
  int hcf=0;
        for(int i = 1; i <= a || i <= b; i++){
                if( a%i == 0 && b%i == 0 )
                hcf = i;
        }
  return hcf;
}

void rational_number(int a1,int b1,int a2,int b2,int e1,int e2,float e3,float *sum,float *diff,float *mul,float *div,float *exp_nn,float *exp_n,float *exp_fp,float *exp_fp_r)
{

  int f1,f2;
  f1=gcd(a1,b1);
  f2=gcd(a2,b2);
  a1=a1/f1;b1=b1/f1;a2=a2/f2;b2=b2/f2;
  *sum =(float)((a1*b2)+(a2*b1))/(float)(b1*b2);
  *diff = (float)((a1 * b2) - (a2 * b1)) / (float)(b1 * b2);
  *mul = (float)(a1 * a2) / (float)(b1 * b2);
          if((a2*b1)!=0){
                *div = (float)(a1 * b2) / (float)(a2 * b1) ;
                }
          else{
                printf("denominator is 0");
          }
  *exp_nn = (float)(pow(a1,e1))/(float)(pow(b1,e1));
  e2*= -1;
  *exp_n = (float)(pow(b1,e2))/(float)(pow(a1,e2));
  *exp_fp = (float)(pow(a1,e3))/(float)(pow(b1,e3));
  *exp_fp_r= (float)(pow(e3,(a1/b1)));
}

int main()
{

  int a,b,c,d,e1,e2;
  float sum=0,diff=0,mul=0,div=0,exp_nn=0,exp_n=0,exp_fp=0,exp_fp_r=0,e3;
              printf("Enter the numerator and denominator of the 1st rational number: ");
              scanf("%d %d",&a,&b);
              printf("Enter the numerator and denominator of the 2nd rational number: ");
              scanf("%d %d",&c,&d);
              printf("Enter the non-negative integer power: ",e1);
              scanf("%d",&e1);
              printf("Enter the negative integer power: ",e2);
              scanf("%d",&e2);
              printf("Enter the real(floating-point) number: ",e3);
              scanf("%f",&e3);
              rational_number(a,b,c,d,e1,e2,e3,&sum,&diff,&mul,&div,&exp_nn,&exp_n,&exp_fp,&exp_fp_r);
              printf("\n sum=%f\n differece=%f\n product=%f\n quotient=%f\n",sum,diff,mul,div);
              printf(" Exponentiation of a rational number to a non-negative integer power is %f\n",exp_nn);
              printf(" Exponentiation of a rational number to a negative integer power is %f\n",exp_n);
              printf(" Exponentiation of a rational number to a real (floating-point) number is %f\n",exp_fp);
              printf(" Exponentiation of a real number to a rational number is %f",exp_fp_r);
  return 0;

}
