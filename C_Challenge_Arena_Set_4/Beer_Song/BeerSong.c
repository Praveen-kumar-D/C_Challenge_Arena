#include <stdio.h>
#include <stdlib.h>

int main()
{
    int verse_number;
    for(verse_number=99;verse_number>=0;verse_number--){
        if (verse_number > 2)
        printf("%i bottles of beer on the wall, %i bottles of beer.\n"
                        "Take one down and pass it around, %i bottles of beer "
                        "on the wall.\n\n", verse_number,
                                          verse_number,
                                          verse_number - 1);
    else if (verse_number == 2)
        printf("2 bottles of beer on the wall, 2 bottles of beer.\n"
                        "Take one down and pass it around, 1 bottle of beer "
                        "on the wall.\n");
    else if (verse_number == 1)
        printf("\n1 bottle of beer on the wall, 1 bottle of beer.\nTake "
                        "it down and pass it around, no more bottles of beer on"
                        " the wall.\n");
    else if (verse_number < 1)
        printf("\nNo more bottles of beer on the wall, no more bottles "
                        "of beer.\nGo to the store and buy some more, 99 "
                        "bottles of beer on the wall.\n");
  }

    return 0;
}
