#include<stdio.h>
#include<string.h>

int ham_d(char *p1,char *p2,int l1)
{
    int cnt=0;
       for(int i=0;i<l1;i++){
            if(*(p1+i)!= *(p2+i)){
                cnt++;
         }
    }
    return(cnt);
}


int main()
{

  char strand1[50],strand2[50];
	        printf("Enter the two strands: \n");
	        printf("First strand:");
	        scanf("%s",&strand1);
	        printf("Second strand:");
	        scanf("%s",&strand2);
  int l1=strlen(strand1),l2=strlen(strand2);
	       if(l1==l2){
                int d=ham_d(strand1,strand2,l1);
                printf("The hamming distance is: %d",d);
                }
	       else{
                printf("Both strands should have same length");
           }
  return 0;

}
