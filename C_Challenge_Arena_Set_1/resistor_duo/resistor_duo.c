#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
enum resistor_band_items {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GRAY, WHITE, UNKNOWN};

struct items
 {
    char *name;
    enum resistor_band_items id;
 } item_list[] = {
    {"black", BLACK},
    {"brown", BROWN},
    {"red", RED},
    {"orange", ORANGE},
    {"yellow", YELLOW},
    {"green", GREEN},
    {"blue", BLUE},
    {"violet", VIOLET},
    {"gray", GRAY},
    {"white", WHITE}
};
int main()
{
    char s[10],b1[10],b2[2];
    int a[4],j=0,i;

    printf("Enter the color (format:color-color): \n");
    scanf("%s",s);
while(t!=NULL){
        strcpy(b1,t);
    for(i=0;i<=9;i++){
        if(strcmp(b1,item_list[i].name)==0){
            a[j]=i;
            break;
        }
    }
    strcpy(b2,t);
    j=j+1;
    for(i=0;i<=9;i++){
        if(strcmp(b2,item_list[i].name)==0){
            a[j]=i;
            break;
        }
    }
t=strtok(NULL,"-");
}
    for(int k=0;k<2;k++){
        printf("\t%d",a[k]);
    }
    printf("\n%d%d ohm ",a[0],a[1]);
    return 0;
}
