#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define N 0
#define E 1
#define S 2
#define W 3

bool isCircular(char path[],int x,int y)
{
  int dir = N;
        for (int i=0; path[i]; i++){
                char move = path[i];
        if (move == 'R'){
            dir = (dir + 1)%4;
        }
        else if (move == 'L'){
        dir = (4 + dir - 1)%4;
        }
        else // if (move == 'G'){
            if (dir == N)
                y++;
            else if (dir == E)
                x++;
            else if (dir == S)
                y--;
            else // dir == W
                x--;
      }

  printf("Final position of the Robot : (%d,%d)",x,y);
}

int main()
{
    int x,y;
    char path[30];
        printf("Enter the path pattern(Right-R ,Left-L, Advance-A):\n");
        gets(path);
        printf("enter the starting position :");
        scanf("%d %d",&x,&y);
    isCircular(path,x,y);
  return 0;

}

