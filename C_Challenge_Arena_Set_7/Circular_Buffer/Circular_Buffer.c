#include <stdio.h>
#include <stdlib.h>

int main()
{

    int s,ch,old=0,i=0,count=0,j;
    char x;
    printf("Enter buffer size\n");
    scanf("%d",&s);

    char *c=malloc(s*sizeof(int));
    for(j=0;j<s;j++){
        *(c+j)='\0';
    }

    while(1){
        printf("Enter 1 to add elements, 2 to remove, 3 to display buffer\n");
        scanf("%d",&ch);
        getchar();
        if(ch==1){
            if(count==s){
                printf("Buffer is full, oldest element will be overridden, press y to continue or n to skip operation\n");
                scanf("%c",&x);
                getchar();
            }
            count=0;
            if(x=='y'||x=='Y'){
            if(*(c+i)!='\0'){
                if(old==s-1){
                    old=0;
                }
                else{
                    old++;
                }
            }
            scanf("%c",(c+i));
            getchar();
            if(i==s-1){
                i=0;
            }
            else{
                i++;
            }
            }
        }
        else if(ch==2){
            if(count==0){
                printf("Buffer is already empty\n");
            }
            else{
                *(c+old)='\0';
                if(old==s-1){
                    old=0;
                }
                else{
                    old++;
                }

            }
            count--;
        }
        else if(ch==3){
            for(j=0;j<s;j++){
                if(j==s-1){
                    printf("%c\n",*(c+j));
                    break;
                }
                printf("%c ,",*(c+j));
            }

        }
        else{
            printf("Invalid choice\n");
        }
        count=0;
        for(j=0;j<s;j++){
            if(*(c+j)!='\0'){
                if(count<s)
                count++;
            }
        }

        printf("Press y to continue, n to stop\n");
        scanf("%c",&x);
        if(x!='y'&&x!='Y')
            break;
    }
    return 0;
}
