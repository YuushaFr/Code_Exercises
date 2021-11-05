#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    int mounts[8];
    int max_val;
    int max_ind;
    int n = 1;

    // game loop
    while (1) {
        for (int i = 0; i < 8; i++) {
            // represents the height of one mountain.
            int mountain_h;
            scanf("%d", &mountain_h);
            mounts[i] = mountain_h;
        }
        max_ind = NULL;
        max_val = NULL;

        if (n%2 == 0){
            for (int j = 0; j < 8; j++) {
                if (mounts[j] > max_val){
                    max_val = mounts[j];
                    max_ind = j;
                }
            }
        } else {
            for (int j = 7; j >= 0; j--){
                if (mounts[j] > max_val){
                    max_val = mounts[j];
                    max_ind = j;
                }
            }
        }


        

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        n++;
        printf("%d\n",max_ind); // The index of the mountain to fire on.
    }

    return 0;
}
