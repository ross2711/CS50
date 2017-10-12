/* 

Implement a program that prints out a half-pyramid as 
per the CS50 specification.

*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h; // height
    do {
        printf("Height: ");
        h = get_int();
    } while (h > 23 || h < 0);

    for(int i = 0; i < h; i++){
        for (int j = h - i; j - 1 > 0; j--) {
            printf(" "); //print spaces
        }
        for(int k = 0; k <= i + 1; k++) {
            printf("#"); //print hashes
        }
        printf("\n"); // print new line
    }
}
