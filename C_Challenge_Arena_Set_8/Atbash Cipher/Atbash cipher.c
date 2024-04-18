#include<stdio.h>

int main()
{

    char s[100];
           printf("Enter the string to be Encrypted/Decrypted : ");
           gets(s);
    char t[26]="abcdefghijklmnopqrstuvwxyz";
    char z[26]="zyxwvutsrqponmlkjihgfedcba";
        for(int i=0;i<strlen(s);i++){
                for(int j=0;j<=26;j++){
                    s[i]=tolower(s[i]);
                    if(s[i]== t[j]){
                            s[i]=z[j];
                            break;
        }
    }
}
    printf("The Encryped/Decrypted string is : %s",s);

}
