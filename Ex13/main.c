#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int i = 0;

    // go through each string in argv
    // why am I skipping argv[0]
    // Answer: I believe that you are skipping because the first argument in argv is the file name you are calling, right?
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    //let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;
    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    //int arr[2][2] = { {10, 20}, {30, 40} };

    // Personal Test
    //printf("2D Array Elements:\n");
    //for (int i = 0; i < 2; i++) {
    //    printf("%d ", arr[i]);
    //    printf("\n");
    //}


    // Extra Credit:
    // NULL is a pointer that points nowhere.
    // You can compare other pointers to NULL to see if they are safe to use.
    // Functions like malloc() return NULL if they fail.

    char *test = states[1];

    test = argv[1];

    printf("Tester: %s", test);

    return 0;

}