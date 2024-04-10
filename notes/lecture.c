#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //gets users details
    string name = get_string("What is your name? \n");
    int age = get_int("What is your age? \n");
    string phone = get_string("what is your phone number? \n");
    //detail confirmation
    char confirm = get_char ("Your details are %s , %i , %s correct?",name, age, phone);

    if(confirm == 'Y' || confirm == 'y')
    {
        printf("We will be sure to call you at %s thank you for your time %s age %i\n" ,phone , name , age);
    }
    else if (confirm == 'N' || confirm == 'n')
    {

    }
}
