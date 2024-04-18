#include<stdio.h>
#include<math.h>

int main()
{
    int N,count=0;
             printf("Enter the total value: ");
             scanf("%d",&N);
         if(N>255){
                printf("Tom is allergic to eggs(1)");
         }
         else{
                printf("Tom is allergic to ");
         while(N!=0){
                if(N>=128){
                    printf("cats(128), ");
                    N=N-128;
                }
                else if(N>=64){
                    printf("pollen(64), ");
                    N=N-64;
                }
                else if(N>=32){
                    printf("chocolate(32), ");
                    N=N-32;
                }
                else if(N>=16){
                    printf("tomatoes(16), ");
                    N=N-16;
                }
                else if(N>=8){
                    printf("strawberry(8), ");
                    N=N-8;
                }
                else if(N>=4){
                    printf("shellfish(4), ");
                    N=N-4;
                }
                else if(N>=2){
                    printf("peanuts(2), ");
                    N=N-2;
                }
                else if(N==1){
                    printf("eggs(1).");
                    N=N-1;
                }
        }
    }
}

