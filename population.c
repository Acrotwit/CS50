#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //declared variables
    long llama_start = 0;
    int years = 0;
    long llama_end = 0;

    // TODO: Prompt for start size
    do
    {
        llama_start = get_long("How many llamas are in your flock?(must be more than 9)\n");
    }
    while(llama_start < 9);

    long llama = llama_start;

    // TODO: Prompt for end size
    do{
        llama_end = get_long("How many llamas do you want (must be more than your current llamas)\n");
    }
    while(llama_end < llama_start);

    // TODO: Calculate number of years until we reach threshold
    while (llama_start < llama_end)
    {
        llama_start = llama_start + llama_start/3 - llama_start/4;
        years++;
    }
    // TODO: Print number of years
    printf("Start size: %li\n End Size: %li\n Years: %i\n", llama, llama_end, years);
}
