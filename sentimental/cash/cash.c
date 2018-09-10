// "greedy cashier"
// a program that takes "change owed" as an input
// and outputs the smallest amount of coins required to pay that change

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change; //initialize change float whch will be assigned by user
    int coins = 0; //initialize coins int at 0 which will go up by 1 each time a coin is added until total

    do  // prompt user for input - an amount of change - ex/ .51
    {
        change = get_float("Change Owed: ");
    }
    while (change < 0); // keep asking for an amount of change until it's a positive number

    int changeAsInt = round(change * 100);  // need to turn change from a float --> an int, but also round it.
    // we are converting $1 to 100 cents for the math

    while (changeAsInt >= 25)  // while change owed is more than or equal to 25
    {
        changeAsInt -= 25; // subtract 25 from change amt
        coins++; // add 1 to coin total
    }
    while (changeAsInt >= 10) // while change owed is more than or equal to 10
    {
        changeAsInt -= 10; //subtract 10 from change amt
        coins++; // add 1 to coin total
    }
    while (changeAsInt >= 5) // while change owed is more than or equal to 5
    {
        changeAsInt -= 5; //subtract 5 from change amt
        coins++; // add 1 to coin total

    }
    while (changeAsInt >= 1) // while change owed is more than or equal to 1
    {
        changeAsInt -= 1; //subtract 1 from change amt
        coins++; // add 1 to coin total
    }

    printf("The minimum number of coins is %i\n", coins); //prints the min # of coins (as an int) needed to give change

}