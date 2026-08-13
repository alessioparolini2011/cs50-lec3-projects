//this project is a simplified version of Super Mario: you can build blocks, coloumns and "?" lines, typical elements of his world!

#include <stdio.h>
#include <cs50.h>

int questio();
int blocks();
int multiblocks();

int main (void)
{
    questio();
    blocks();
    multiblocks();
}

//funcitons!

int questio(void)
{
    int n = get_int("How many \"?\" do you want in the line? \n");
    
    for (int i = 0; i < n; i++)
    {
        printf("? ");
    }
    printf("\n");
}  

int blocks(void)
{
    int n = get_int("How many \"#\" do you want in the coloumn? \n");

    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }
    
}

int multiblocks(void)
{
    int n = get_int("How many \"#\" do you want the block have for each side? \n");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
    
}