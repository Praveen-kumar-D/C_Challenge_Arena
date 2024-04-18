#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

  char str[100], sstr[100];
  int  l, c = 0;
          printf("Input the string : ");
          fgets(str, sizeof str, stdin);
          int len=strlen(str);
          printf("Input the length of substring :");
          scanf("%d", &l);
  int pos=l;
        if(l < len){
                printf("The substring retrieve from the string is : ");
           for(int i=0;i<len;i++){
               c=0;
            while (c < l){
                sstr[c] = str[pos+c-l];
                c++;
            }
           sstr[c] = '\0';
           pos++;
        if(pos>len)
           break;
        else
           printf("%s, ", sstr);
     }
   }
        else{
                printf("Invalid");
}
   return 0;

}
