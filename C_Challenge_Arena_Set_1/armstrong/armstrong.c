#include<stdio.h>

int main(){
  int num,count,numc,onum,res=0,rem;
       printf("Enter the number:");
       scanf("%d",&num);
       numc=onum=num;
    while(numc!=0){
            numc=numc/10;
            count++;
    }
    while(num!=0){
            rem=num%10;
            res+= pow(rem,count);
            num=num/10;
    }
    if(res==onum){
            printf("The number %d is an armstrong number",onum);
    }
    else{
            printf("The number %d is not an armstrong number",onum);
    }
  return(0);
}
