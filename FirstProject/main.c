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

    //You can also do some math operations with variables

    int ageCY; //Age CURRENT YEAR
    ageCY = 2022-2007;
    printf("I am %d years old\n", ageCY);

    //You can also do math with other variables
    int Value1;
    int Value2;
    int Value3;

    Value1 = 1;
    Value2 = 2;
    Value3 = Value1 + Value2;

    printf("The values are: %d, %d y %d\n", Value1, Value2, Value3);

    //Life hack: You can also give value to the variables in the same line

    int Valor1 = 10;
    int Valor2 = 20;
    int Valor3 = Valor1-Valor2;

    printf("Valor 3 is: %d\n", Valor3);

    //String terminators: To use less memory, when you're using a string, end the string with "\0". Ex: "Rigoberto Canales\0"

    /*
     * Arrays!!
     * How to create them:
     * - Set the data type (Char...)
     * - Give it a name
     * - Add brackets next to the name and put the value (in bytes) of the array. Remember to count the String Terminator and Whitespaces!
     * Rodrigo Sanchez\0
     */

    char name[16] = "Rodrigo Sanchez";

    printf("My name is %s\n", name);
    return 0;
}
