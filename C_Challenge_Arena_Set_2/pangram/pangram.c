#include<stdio.h>
#include<conio.h>

void main()
{
  char s[100];
  int i,freq[26]={0},total=0;
          printf("Enter the String:\n");
          gets(s);
        for(i=0;s[i]!='\0';i++){
                s[i]=tolower(s[i]);
               if(s[i]>='a' && s[i]<='z'){
                   int index=s[i] - 'a';
                   freq[index]+=1;
         }
    }
        int count=0;
        for(int i=0;i<26;i++){
                if(freq[i]==0)
                count++;
        }
        if(count==0){
                printf("\n The Entered String is a Pangram String.");
        }
        else{
                printf("\n The Entered String is not a Pangram String.");
        }
  return(0);
}

