//A little calculator, to try operators and double integer. 

#include <stdio.h>
#include <cs50.h>

//prototype 

void sum();

void molty();

void fraction();

void chooser();


int main(void)
{
    printf("This is a very simple calculator. It does algebrical sums, moltiplications and fractions.\nIt cuts numbers at the 4th decimal digit.\n REMEMBER: you can't use 0 as divisor in fractions!\n\nIt's done by Alessio Parolini, a 15yo developer from Italy. I hope you like it. Have a good one!\n\n\n");
    
    chooser();
}

//functions!

void chooser(void)
{
    while (true)
    {
        int choose = get_int("Type 1 for do an algebrical sum, 2 for do a moltiplication and 3 to do a fraction. Instead type 4 if you want to quit.\n ");

        if (choose == 1){
            sum();
            continue;
        }
        else if (choose == 2){
            molty();
            continue;
        }
        else if (choose == 3){
            fraction();
            continue;
        }
        else if (choose == 4){
            break;
        }
        else {
            continue;
        }

    }
}

void sum (void)
{
    printf("Let's do a algebrical sum!\n");
    double x = get_double("What's x? ");
    double y = get_double("What's y? ");

    printf("\n\nResult is %.4f\n\n", x + y);

}

void molty (void)
{
    printf("Let's do a moltiplication!\n");
    double x = get_double("What's x? ");
    double y = get_double("What's y? ");

    printf("\n\nResult is %.4f\n\n", x * y);

}

void fraction (void)
{
    printf("Let's do a fraction!\n");
    double y;
    double x = get_double("What's x? ");
    do
    {
        y = get_double("What's y? ");
    }
    while (y == 0);

    printf("\n\nResult is %.4f\n\n", x / y);
    
}