#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
enum resistor_band_items {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GRAY, WHITE,UNKNOWN};
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
    char b1[10],b2[10],b3[10],b4[10];
    int a[4],j=0,i;

    printf("Enter the color code: \n");
    printf("First color:");
    gets(b1);
    printf("second color:");
    gets(b2);
    printf("Thirg color:");
    gets(b3);
    printf("Fourth color:");
    gets(b4);

    for(i=0;i<=9;i++){
        if(strcmp(b1,item_list[i].name)==0){
            a[j]=i;
            break;
        }
    }
    j=j+1;
    for(i=0;i<=9;i++){
        if(strcmp(b2,item_list[i].name)==0){
            a[j]=i;
            break;
        }
    }
    j=j+1;
    for(int i=0;i<=9;i++){
        if(strcmp(b3,item_list[i].name)==0){
            a[j]=i;
            break;
        }
    }


    for(int k=0;k<3;k++){
        printf("\t%d",a[k]);
    }
    int y=0;
    char c[10]="gold";
if(strcmp(c,b4)== 0){
     y=5;
}
else{
    y=10;
}
    long int x;
    x=(a[0]*pow(10,a[2])+(a[1]*(pow(10,(a[2]-1)))));
    printf("\n%d ohm with +/- %d tolerance ",x,y);
    return 0;
}
