#include<stdio.h>
#include<math.h>

int split(int n,int *a){
int temp;
for(int i=0;i<4;i++){
    temp=n%10;
    *(a+i)=temp;
    n=n/10;
}

}

int main()
{

 int n,arr[10],a,b,c,d;
 char a1[10][10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
char a2[10][10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
char a3[10][10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
char a4[4][10]={"","M","MM","MMM"};
 printf("Enter the number: ");
 scanf("%d",&n);

 if(n<=3000){
        split(n,arr);
        a=arr[0];b=arr[1]*10;c=arr[2]*100;d=arr[3]*1000;
        printf("\n%d = %s%s%s%s",n,a4[d/1000],a3[c/100],a2[b/10],a1[a]);
 }

 else{
        printf("enter a number below 3000");
        }
  return(0);
}


