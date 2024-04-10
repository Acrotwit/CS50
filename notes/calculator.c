#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char function = get_char("what function do you want to use? A for Addition or D for Division");
    long x = get_long("x: ");
    long y = get_long("y: ");

    float z = (float) x / (float) y;
if (function == 'A')
    {
      printf("%li\n", x + y);
    }
    else if (function == 'D')
    printf("%f\n", z);
}
