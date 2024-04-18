#include<stdio.h>

int main()
{

  char in[100],out[100];
  int c=0,d=0;
         printf("Enter the input string of digits: ");
         gets(in);
      if(in[0]=='1'){
            c=2;
         while (in[c] != '\0'){
             if(isdigit(in[c])){
                 out[d] = in[c];
                 d++;
             }
             c++;
         }
         out[d]='\0';
         printf("%s",out);
       }
      else if(in[0]=='+'){
            c=2;
        while (in[c] != '\0'){
                if(isdigit(in[c])){
                    out[d] = in[c];
                    d++;
        }
        c++;
    }
    out[d]='\0';
    printf("%s",out);
 }
     else{
            while (in[c] != '\0'){
                if(isdigit(in[c])){
                    out[d] = in[c];
                    d++;
     }
      c++;
   }
   out[d]='\0';
   printf("%s",out);
 }
  return 0;

}
