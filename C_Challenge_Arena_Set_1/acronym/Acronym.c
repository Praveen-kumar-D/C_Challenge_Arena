#include<stdio.h>
#include<string.h>
int main()
{
char str[100],*ptr,i,l;
printf("Enter a string\n");
gets(str);
while(str[i]) {
      str[i]=toupper(str[i]);
      i++;
   }

l=strlen(str);
ptr=str;
printf("The Acronym of the string %s is:\n",str);
printf("%c",*(ptr+0));
for(i=1;i<l;i++)
{
if(*(ptr+i)==' ')
printf(" %c ",*(ptr+i+1));
}
}
