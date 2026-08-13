#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string username = get_string("Hello, what's your name? \n");

    string myname = "Alessio";

    printf("Hello, %s, I'm %s. Nice to meet you\n", username, myname);
}