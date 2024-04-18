#include<stdio.h>
#include<math.h>
#include<string.h>

float planet_days(long int a,int c){
     float b;
     switch (c){
       case 0:
           b = a/31557600.0;
           return b;
       case 1:
           b = a/(31557600.0*0.2408467);
           return b;
       case 2:
           b = a/(31557600.0*0.61519726);
           return b;
       case 3:
           b = a/(31557600.0*1.8808158 );
           return b;
       case 4:
           b = a/(31557600.0*11.862615);
           return b;
       case 5:
           b = a/(31557600.0*29.447498);
           return b;
       case 6:
           b = a/(31557600.0*84.016846);
           return b;
       case 7:
           b = a/(31557600.0*164.79132);
           return b;
           }
}

enum planet{EARTH,MERCURY,VENUS,MARS,JUPITER,SATURN,URANUS,NEPTUNE,UNKNOWN};

struct items
{
    char *name;
    enum planet id;
 } item_list[] = {
    {"earth",EARTH },
    {"mercury", MERCURY},
    {"venus",VENUS},
    {"mars", MARS},
    {"jupiter", JUPITER},
    {"saturn", SATURN},
    {"uranus",URANUS},
    {"neptune",NEPTUNE}
};

int main()
{

  long int age;
  char b[20],c[20];
         printf("Enter the age in seconds:");
         scanf("%ld",&age);
         printf("Enter the planet:");
         scanf("%s",&b);
         strcpy(c,b);
  int a;
      for(int i=0;i<=7;i++){
            if(strcmp(b,item_list[i].name)==0){
                a=i;
                break;
      }
    }
         printf("%4.2f %s - years old ",planet_days(age,a),c);
  return(0);

}
