#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

  char s[100]={'\0}'};
               printf("Enter your statement\n");
               gets(s);
  int q=0,y=1,f=0;
  int l=strlen(s);
  int i;
            while(*s){
                    f=1;
            for(i=0;i<l;i++){
                    if(islower(s[i])){
                        y=0;
            }
    }
            if(s[l-1]=='?')
                q=1;
            if(q==0&&y==0){
                printf("Whatever.");
    }
            else if(q==0&&y==1){
                    printf("Whoa, chill out!");
    }
            else if(q==1&&y==0){
                    printf("Sure.");
    }
            else
                  printf("Calm down, I know what I'm doing!");
                  break;
    }
            if(f==0)
                printf("Fine. Be that way!");
  return 0;

}
