#include<stdio.h>
#include<string.h>

int Nucleotide_count(char *p,int l1,int *g,int *c,int *t,int *a)
{
       for(int i=0;*(p+i)!='\0';i++){
           *(p+i)= tolower(*(p+i));
       switch(*(p+i)){
         case 'g':
            *g+=1;
            break;
         case 'c':
            *c+=1;
            break;
         case 't':
            *t+=1;
            break;
         case 'a':
            *a+=1;
            break;
         default:
            break;
      }
  }
}


int main()
{

  char strand[50];
  int g=0,c=0,t=0,a=0;
	        printf("Enter the DNA strand: ");
	        gets(strand);
  int l1=strlen(strand);
  Nucleotide_count(strand,l1,&g,&c,&t,&a);
            printf("\nThe Nucleotide counts are:\nG = %d\nC = %d\nT = %d\nA = %d",g,c,t,a);
  return 0;

}

