#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    int n,c=0;
char a[20];
printf("Enter the string:");
gets(a);
n=strlen(a);
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
               if(a[i] == a[j]){
                    if((a[i]=='-')||(a[i]==' '))
                        break;
                    else
                        c=c+1;
            }
        }
    }

if(c==0){
    printf("Entered string is an isogram");
}
else{
    printf("Entered string is not an isogram");
}
return(0);
}
