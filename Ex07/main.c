#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Remember that the first argument is technically the argc argument.
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        return 1;
    }

    // Take the second argument(so not argc), and then the individual characters of said argument, and then stop when you reach the end of the memory.
    for (int i = 0; argv[1][i] != '\0'; i++) {
        // So set a variable equal to the character mentioned above 
        char letter = argv[1][i];
        if (letter >= 'A' && letter <= 'Z') {
            letter = letter + 32;
        }
        switch (letter) {
            // if letter entered is a, then it is the same as if it would have been A. Check for either of them.
            case 'a':
                printf("%d: 'A'\n", i); break;
            case 'e':
                printf("%d: 'E'\n", i); break;
            case 'i':
                printf("%d: 'I'\n", i); break;
            case 'o':
                printf("%d: 'O'\n", i); break;
            case 'u':
                printf("%d: 'U'\n", i); break;
            case 'y':
                if (i > 2) printf("%d: 'Y'\n", i);
                break;
            // Else if one of the above is not found, do the following.
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    return 0;
}
