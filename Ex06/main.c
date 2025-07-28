// While-loop and Boolean expressions
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    int i = 0;
    int j = 25;

    while (i < 26) {
        printf("%d", i);
        i++;
    }

    printf("\n");

    // Extra Credit
    while (j >= 0) {
        printf("%d", j);
        j--;
    }

    return 0;

}