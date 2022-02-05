#include <stdio.h>
#include <stdlib.h>


int main()
{
    // %s -> Strings
    // %d -> Whole numbers (1, 2, 3...)
    // %f -> floating point numbers (floats) (3.141592...)
    // %.xf -> x Round floating point numbers to the value of x ( "I am %.2f human" -> "I am 99.17 human" BUT NOT "I am 99,99999 human")

    printf("Pi is: %.2f\n", 3.141592);
    printf("Pi is: %.1f\n", 3.141592);
    printf("Pi is: %.5f\n", 3.141592);

    return 0;
}
