#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int drops;
    char result[20]="";

    printf("Enter the Number : ");
    scanf("%d",&drops);

    if (drops % 3 == 0) strcat(result, "Pling");
    if (drops % 5 == 0) strcat(result, "Plang");
    if (drops % 7 == 0) strcat(result, "Plong");
    if (strlen(result) == 0)
        printf("%d", drops);
    else{
        printf("%s",result);
    }

    return 0;
}
