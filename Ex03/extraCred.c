#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{

    // ESCAPE SEQUENCES

    // \a - Alert
    printf("Hello this is a\a test!\n");
    // \b - Backspace
    printf("Hello this is a\b test!\n");
    // \e - Escape Character
    printf("Hello this is a\e test!\n");
    // \f - Formfeed Page Break
    printf("Hello this is a\f test!\n");
    // \n - Newline
    printf("Hello this is a test!\n");
    // \r - Carriage Return
    printf("Hello this is a\r test!\n");
    // \t - Horizontal Tab
    printf("Hello this is a\t test!\n");
    // \v - Vertical Tab
    printf("Hello this is a\v test!\n");
    // \\ - Backspace
    printf("Hello this is a\\ test!\n");
    // \' - Aphostraphe Tab
    printf("Hello this is a\' test!\n");
    // \" - Double Quotation Tab
    printf("Hello this is a\" test!\n");
    // \? - Question Mark
    printf("Hello this is a\? test!\n");
    // \x??? - Hex
    printf("Hello this is a\x12 test!\n");
    // \111(three nums) - Octal
    printf("Hello this is a\111 test!\n");
    // \u00C0 - Universal Character Names - Unicode
    printf("Hello this is a\u00C0 test!\n");
    printf("\n");

    char char_test = 'c';
    int signed_test = 12;
    float float_test = 4.2;
    unsigned int unsigned_test;
    unsigned_test = 4294967295;
    long int long_test = 247483647;
    double double_test = 789.123456;

    // FORMAT SPECIFIERS
    // %c - Used to print a character
    printf("Character: %c\n", char_test);
    // %d - Used to print the signed integer
    printf("Signed Int: %d\n", signed_test);
    // %f - Used to print the float values
    printf("Float: %f\n", float_test);
    // %i - Used to print the unsigned integer
    printf("Unsigned Int: %i\n", unsigned_test);
    // %l - Used to print the long integer
    printf("Long Int: %ld\n", long_test);
    // %lf - Used to print the double values
    printf("Double Int: %lf\n", double_test);
    // I am too lazy to printf the below stuff tbh
    // %lu - Used to print the unsigned integer or unsigned long integer
    // %s - Used to print the string
    // %u - Used to print the unsigned integer
}