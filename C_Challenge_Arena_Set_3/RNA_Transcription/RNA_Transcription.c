#include<stdio.h>
#include<string.h>

char* RNA_transcrption(char *p,int l1)
{
    static char rna[50];
       for(int i=0;i<l1;i++){
           *(p+i)= tolower(*(p+i));
       switch(*(p+i)){
         case 'g':
            rna[i] = 'c';
            break;
         case 'c':
            rna[i] = 'g';
            break;
         case 't':
            rna[i] = 'a';
            break;
         case 'a':
            rna[i] = 'u';
            break;
         default:
            rna[i] = NULL;
            break;
      }
         }
    return(rna);
}


int main()
{

  char strand[50];
	        printf("Enter the DNA strand: ");
	        scanf("%s",&strand);
  int l1=strlen(strand);
            printf("\nThe RNA transcription is: %s",RNA_transcrption(strand,l1));
  return 0;

}

