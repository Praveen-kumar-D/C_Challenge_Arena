#include<stdio.h>
#include<string.h>
#include<math.h>

void append(int *a,int  *b,int f,int s)
{
    realloc(a,sizeof(int)*(f+s));
    a+=f;
    for(int i=0;i<s;i++,a++,b++)
           *a=*b;

}

void concat(int *a,int  *b,int *c,int f,int s,int t)
{
    realloc(a,sizeof(int)*(f+s+t));
    a+=f;
    for(int i=0;i<s;i++,a++,b++)
           *a=*b;
    for(int i=0;i<t;i++,a++,c++)
           *a=*c;

}

int filter(int *a,int s,int n)
{
    int b[s],j=0;
   for(int i=0;i<s;i++)
    {
     if(a[i]%n==0)
     {
         b[i]=a[i];
         j++;
     }
     else
         b[i]=0;
    }

    realloc(a,sizeof(int)*j);
    for(int i=0;i<s;i++)
    {
        if(b[i]!=0)
        {
            *a=b[i];
            a++;
        }

    }
    return j;
}

void mapp(int *a,int f)
{
    for(int i=0;i<f;i++)
       a[i]=mul(a[i]);
}

int mul(int ele)
{
    return(ele*3);
}

void rev(int *a,int f)
{
    int b[f];
    for(int i=0;i<f;i++)
       b[i]=a[f-i-1];
    for(int i=0;i<f;i++)
       a[i]=b[i];

}

void foldl(int *c,int t,int acc)
{
    int r=acc+*c;
     for(int i=1;i<t;i++)
       r-=c[i];
    printf("Result :%d for fold left after applying subtraction function using accumulator %d",r,acc);
}

void foldr(int *c,int t,int acc)
{
    int r=acc+c[t-1];
     for(int i=t-2;i>=0;i--)
       r-=c[i];
    printf("Result :%d for fold right after applying subtraction function using accumulator %d",r,acc);
}
