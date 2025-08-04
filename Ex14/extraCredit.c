// Yes, it's extra credit time!

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// forward declarations
void print_letters(char arg[]);
void print_arguments(int argc, char *argv[]);

void print_letters(char arg[]) {
    int i = 0;

    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        if (isalpha(ch) || isblank(ch)) {
            printf("'%c' == %d\n", ch, ch);
        }
    }

    printf("\n");
}

void print_arguments(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

int main(int argc, char *argv[]) {
    print_arguments(argc, argv);
    return 0;
}
