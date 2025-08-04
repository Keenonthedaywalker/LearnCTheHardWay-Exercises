#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_input {
    int attempts;
    char *code;
    int error;
    char *errorStr;
} t_input;
//av[i]
//{"-c", "123", "-t", "234"};
struct s_input *parsing(int ac, char **av) {
    t_input *ret = malloc(sizeof(t_input));
    
    int i =0;
    while (av[i]) {
        if (strcmp(av[i],"-c") == 0) {
            if (av[i + 1] == NULL) {
                ret->error = -1;
                return ret;
            }
            ret->code = malloc(sizeof(char) *4 + 1); 
            strcpy(ret->code, av[i + 1]);
        }
        i++;
    }
    return ret;
}


int main(int ac, char **av) {
    // ac is the number of args
    // av is the content of the args
    
    t_input *input = parsing(ac, av);
    if (input->error == -1) {
        printf("Error with parsing %s", input->errorStr);
        return -1;
    }
    printf("Code fetched -> %s", input->code);
}