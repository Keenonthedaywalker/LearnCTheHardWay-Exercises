// Arrays and Strings
#include <stdio.h>
#include <string.h>

int extraCredit(){

    int numbers[4] = {0};
    char name[4] = {'a'};

    //setup the numbers
    numbers[0] = 'Z';
    numbers[1] = 'e';
    numbers[2] = 'd';
    numbers[3] = '\0';

    //setup the name
    name[0] = 1;
    name[1] = 2;
    name[2] = 3;
    name[3] = '\0';

    printf("============================");
    printf("Extra Credit Material: \n");

    printf("numbers: %d %d %d %d\n", 
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n", 
            name[0], name[1], name[2], name[3]);

    //print the name like a string
    printf("name: %s\n", name);

    return 0;

}

int main(int argc, char *argv[]) {

    int numbers[4] = {0};
    char name[4] = {'a'};

    //first print them out raw
    printf("numbers: %d %d %d %d\n", 
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n", 
            name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    //setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    //setup the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';

    //then print them out initialised
    //first print them out raw
    printf("numbers: %d %d %d %d\n", 
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n", 
            name[0], name[1], name[2], name[3]);

    //print the name like a string
    printf("name: %s\n", name);

    //another way to use name
    char *another = "Zed";
    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n", 
            another[0], another[1], another[2], another[3]);

    extraCredit();

    return 0;

}