#include <cs50.h>
#include <stdio.h>

// prototipo

void meow(int times);

int get_times(void);

int main(void)
{
    int cat = get_times();
    meow(cat);
}


 // make the cat barks (is a joke) n times
void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("Woofs!\n");
    }
}

int get_times(void)
{
    //check for avoid invalid inputs 
    int cat;
    do 
    {
        cat = get_int("How many times do you want the cat to meow? \n");
    }
    while (cat < 0);
    return cat;
}
