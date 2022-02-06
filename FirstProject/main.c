#include <stdlib.h>
#include <stdio.h> // Standard Input Output
#include <string.h>
/*
 * How to declare a "#define":
 * - Write #define
 * - Write the name of the const
 * - Assign it a value. YOU CAN'T CHANGE IT LATER, AND YOU DON'T NEED "=" NOR ";"
 */

#define MYNAME "McFest Borealis"

int main()
{
    printf("My name do be %s\n", MYNAME);
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
     */

    char name[18] = "Rigoberto Canales";

    printf("My name is %s\n", name);

    // You can access a value of the array by writing the name of the array, and between the brackets, adding the position
    // For single characters, use '' instead of ""

    name[5] = 'p';
    printf("My name is not %s\n", name);

    // Life hack! You don't actually need to count the values manually. If you leave the brackets empty, The compiler will count them for you!
    char food[] = "Borgir";

    printf("%s is an edible item\n", food);

    // If you want to change the value of an array, you have to use the  function "strcpy();"
    // Syntax of the function: (Array you want to change, the string you want to set it to)
    // Also, you'll want to include string.h (#include <string.h>

    strcpy(food, "Bacon");

    printf("%s is an edible item\n", food);

    return 0;
}
