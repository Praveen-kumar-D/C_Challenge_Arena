#include<stdio.h>

int main()
{

  int a[100],n;
           printf("enter the limit: ");
           scanf("%d",&n);
        for(int i=0;i<n;i++){
                a[i]=i;
        }
        for(int i=2;i<=n;i++){
                if(a[i]!=0){
                    for(int j=2;i*j<=n;j++){
                        a[i*j]=0;
        }
    }
 }
        for(int i=0;i<n;i++){
                a[1]=0;
        if(a[i]!=0){
                printf("%d ",a[i]);
        }
    }
}

