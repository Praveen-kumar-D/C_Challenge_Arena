#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
enum resistor_band_items {BLACK=0, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GRAY, WHITE, UNKNOWN};

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
    char s[20],b1[10],b2[10],b3[10];
    int a[4],j=0,i=0,k;
    int result,multiplier;

    char c_values[10][12]={"ohms","ohms","0 ohms"," Kilo ohms","0 Kilo ohms","00 Kiloohms"," M ohms","0 M ohms","00 M ohms"," G ohms"};

    printf("Enter the color (format:color-color-color): \n");
    scanf("%s",s);
    char *t=strtok(s,"-");

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
        strcpy(b3,t);
        j=j+1;
        for(i=0;i<=9;i++){
            if(strcmp(b3,item_list[i].name)==0){
                a[j]=i;
                break;
            }
        }
    t=strtok(NULL,"-");
    }
    for(k=0;k<=2;k++){
        printf("\t%d",a[k]);
    }

    result=((a[0]*10)+a[1]);
    multiplier=a[2];

    printf("\n%d%s",result,c_values[multiplier]);
    return 0;
}
