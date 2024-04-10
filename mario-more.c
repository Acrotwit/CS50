#include <cs50.h>
#include <stdio.h>

int main(void)
{
//decalring variables

    int height = 1;

//promts the user for the pyramid height while checking if its a positive integer

    do
    {
        height = get_int("How tall do you want your pyramid to be? Positive integers only.\n");
    }
    while (height <= 0 || height > 8);

//builds the left half pyramid

    for (int i = 0; i < height; i++)
    {
        for (int f = 0; f < height - i - 1; f++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
//seperator for the pyramids

        printf("  ");

//builds the right half of the pyramid

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");

    }


}
