#include<stdio.h>
#include<math.h>

int points(int a,int b){
    float d;
    d = sqrt(pow(a,2)+pow(b,2));
    if(d<=10){
        return(1);
    }
    else if(d<=5){
        return(5);
    }
    else if(d<=1){
        return(10);
    }
    else{
            return(0);
    }
}

int main(){

  int x,y;
          printf("Enter the two coordinates:");
          scanf("%d %d",&x,&y);
          printf("The points earned for(%d,%d) is:%d",x,y,points(x,y));

  return(0);

}
