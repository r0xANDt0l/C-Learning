#include <stdlib.h>
#include <stdio.h>


int main()
{
    /*
     * %s -> Strings
     * %d -> Whole numbers (1, 2, 3...)
     * %f -> floating point numbers (floats) (3.141592...)
     * %.xf -> x Round floating point numbers to the value of x ( "I am %.2f human" -> "I am 99.17 human" BUT NOT "I am 99,99999 human"). It also rounds it
    */
    printf("Pi is: %.2f\n", 3.141592);
    printf("Pi is: %.1f\n", 3.141592);
    printf("Pi is: %.5f\n", 3.141592);

    /*Variable rules:
     * Can't start with a number or an underscore ("_")
     * NO SPACES
     * No non-ascii symbols (like &, €, ´, ...)
     * Do not name them like functions
     *
     * Define a variable by:
     *  1: Define the type of data - int, string, float, bool...
     *  2: Write the name of it
     *
     *  You can later add a value to the variable by calling it and asigning it a value with " = (value)"
    */

    int age; // Create variable "Age"
    age = 14; // Asign the value "14" to Age

    printf("I am %d years old\n", age);

    int ageCY; //Age CURRENT YEAR
    ageCY = 2022-2007;
    printf("I am %d years old\n", ageCY);
    return 0;
}
