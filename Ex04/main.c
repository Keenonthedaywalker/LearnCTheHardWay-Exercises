#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    
    int distance = 100;
    float power = 2.345f;
    double super_power = 5435.8273;
    char initial = 'G';
    char firstname[] = "Keenon";
    char lastname[] = "Ribberink";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", firstname);
    printf("I have a last name %s.\n", lastname);
    printf("My whole name is %s %c %s.\n", firstname, initial, lastname);
    
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    // The unsigned keyword modifies the int and char data types to allow them to represent larger positive numbers by not representing negative numbers.
    unsigned long universe_of_defects = 1L * 1024L * 1024L * 2024L;
    printf("The entire universe of %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n", part_of_universe);

    // this makes no sense, just a demo of something weird
    char nul_byte = '\0';

    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", care_percentage);

    return 0;

}