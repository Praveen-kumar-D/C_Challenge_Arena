#include <stdio.h>
#include <string.h>

void f(char *string){
  char temp;
  int n = strlen(string);
        for (int i = 0; i < n-1; i++) {
                for (int j = i+1; j < n; j++) {
                        if (string[i] > string[j]) {
                            temp = string[i];
                            string[i] = string[j];
                            string[j] = temp;
                            }
                        }
                    }
}

int main ()
{
  char str1[50],str2[50],str3[10][20],ostr[50],cstr[50],tstr[50];
  int n,flag =0;
     printf("Enter string to be compared: ");
     gets(str1);
     strcpy(tstr,str1);
     f(str1);
     //printf("sorted str1 %s\n",str1);
     printf("Enter total number of strings: ");
	 scanf("%d",&n);
     printf("Enter strings...\n");
	          for(int loop=0; loop<n; loop++){
                    printf("String [%d] :",loop+1);
                    getchar();
		            scanf("%[^\n]s",str3[loop]);
		            }
              for(int k=0;k<=n;k++){
                    for(int l=0;l<=10;l++){
                        str2[l]=str3[k][l];
              }
    strcpy(ostr,str2);
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    if(l1==l2){
            f(str2);
            //printf("\n%s",str2);
            if(strcmp(str1,str2)== 0){
                strcpy(cstr,ostr);
                flag=1;
            }
    }
              }
    if(flag ==1){
        printf("\n%s is the Anagram of %s",cstr,tstr);
    }
    else{
        printf("\nThere is no Anagram found for %s",tstr);
    }
  return(0);
}
