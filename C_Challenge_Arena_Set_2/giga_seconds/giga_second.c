#include<stdio.h>
#include<stdbool.h>
#include<math.h>
// Return if year is leap year or not.
bool isLeap(int y);
int offsetDays(int d, int m, int y);
void revoffsetDays(int offset, int y, int *d, int *m);
void addDays(int d1, int m1, int y1, int x);
void addTime(int h,int m,int s,int s1,int d,int mnth,int y,int x);
// Driven Program
int main()
{
    printf("Enter your date,month and year of birth\n");
    int d,m,y,h,mn,s;
    scanf("%d",&d);
    scanf("%d",&m);
    scanf("%d",&y);
    printf("Enter the time of your birth in hours,minutes and seconds(24hr format)\n");
    scanf("%d",&h);
    scanf("%d",&mn);
    scanf("%d",&s);
    int g=pow(10,9)/1;
    int x = g/86400;
    int s1 = g%86400;
    printf("%d\n",s1);
    printf("You will have lived for 10^9 seconds on ");
    addTime(h,mn,s,s1,d,m,y,x);
    return 0;
}
bool isLeap(int y)
{
    if (y%100 != 0 && y%4 == 0 || y %400 == 0)
        return true;

    return false;
}

// Given a date, returns number of days elapsed
// from the  beginning of the current year (1st
// jan).
int offsetDays(int d, int m, int y)
{
    int offset = d;

    switch (m - 1)
    {
    case 11:
        offset += 30;
    case 10:
        offset += 31;
    case 9:
        offset += 30;
    case 8:
        offset += 31;
    case 7:
        offset += 31;
    case 6:
        offset += 30;
    case 5:
        offset += 31;
    case 4:
        offset += 30;
    case 3:
        offset += 31;
    case 2:
        offset += 28;
    case 1:
        offset += 31;
    }

    if (isLeap(y) && m > 2)
        offset += 1;

    return offset;
}

// Given a year and days elapsed in it, finds
// date by storing results in d and m.
void revoffsetDays(int offset, int y, int *d, int *m)
{
    int month[13] = { 0, 31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31 };

    if (isLeap(y))
        month[2] = 29;

    int i;
    for (i = 1; i <= 12; i++)
    {
        if (offset <= month[i])
            break;
        offset = offset - month[i];
    }

    *d = offset;
    *m = i;
}

// Add x days to the given date.
void addDays(int d1, int m1, int y1, int x)
{
    int offset1 = offsetDays(d1, m1, y1);
    int remDays = isLeap(y1)?(366-offset1):(365-offset1);

    // y2 is going to store result year and
    // offset2 is going to store offset days
    // in result year.
    int y2, offset2;
    if (x <= remDays)
    {
        y2 = y1;
        offset2 = offset1 + x;
    }

    else
    {
        // x may store thousands of days.
        // We find correct year and offset
        // in the year.
        x -= remDays;
        y2 = y1 + 1;
        int y2days = isLeap(y2)?366:365;
        while (x >= y2days)
        {
            x -= y2days;
            y2++;
            y2days = isLeap(y2)?366:365;
        }
        offset2 = x;
    }

    // Find values of day and month from
    // offset of result year.
    int m2, d2;
    revoffsetDays(offset2, y2, &d2, &m2);

    printf("%d/%d/%d",d2,m2,y2);
}
void addTime(int h,int m,int s,int s1,int d,int mnth,int y,int x){
    int hr,min,sec;
    int st=s1;
    int *t;
    hr=st/3600;
    st=st%3600;
    min=st/60;
    sec=st%60;
    int sec1=s+sec,m1=0,h1=0;
    if(sec1>=60){
        sec1-=60;
        m1+=1;
    }
    m1+=m+min;
    if(m1>=60){
        m1-=60;
        h1+=1;
    }
    h1+=h+hr;
    if(h1>23){
    addDays(d,mnth,y,x+1);
    h1=h1-24;
    }
    else{
    addDays(d,mnth,y,x);
    }
    printf(" at time %2d:%2d:%2d\n",h1,m1,sec1);
}
