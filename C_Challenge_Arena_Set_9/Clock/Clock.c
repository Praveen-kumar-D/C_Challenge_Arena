#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1,m1,h2,m2,c,ch,i;
             printf("Enter clock time in hours and minutes\n");
             scanf("%d",&h1);
             scanf("%d",&m1);
             printf("Enter 1 to add/subtract minutes, 2 to compare two clocks\n");
             scanf("%d",&c);
         if(c==1){
                printf("Enter minutes\n");
                scanf("%d",&m2);
                printf("Enter 0 to add, 1 to subtract minutes\n");
                scanf("%d",&ch);
         if(ch==0){
             for(i=m2;i>0;i--){
                 if(m1==59){
                     m1=0;
         if(h1==23){
                h1=0;
         }
         else{
                h1+=1;
         }
      }
    else{
            m1+=1;
    }
  }
}
    else{
            for(i=m2;i>0;i--){
                if(m1==0){
                    m1=59;
    if(h1==0){
            h1=23;
    }
    else{
            h1-=1;
    }
 }
     else{
            m1-=1;
     }
    }
}
         printf("Final time = %.2d:%.2d\n",h1,m1);
}
    else{
        printf("Enter 2nd clock time in hours and minutes\n");
        scanf("%d",&h2);
        scanf("%d",&m2);
        if(h1==h2 && m1==m2)
            printf("The 2 clock times are equal\n");
        else{
            printf("The 2 clock times are not equal\n");
        }
    }
    return 0;
}
