#include <stdio.h>
#include <string.h>

typedef struct myStruct {

    char *testString;

} myStructTest;

int main(int argc, char *argv[]) {
    myStructTest tester;
    tester.testString = "Hello";

    // Assign testString to argv[0] (unusual but possible)
    argv[0] = tester.testString;

    // Print the first argument (now changed)
    printf("ARGV[0]: %s\n", argv[0]);

    return 0;
}