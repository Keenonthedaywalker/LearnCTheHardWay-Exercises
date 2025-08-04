#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'
    };

    //WARNING:Onsomesystemsyoumayhavetochangethe
    //%ldinthiscodetoa%usinceitwilluseunsignedints
    printf("Thesizeofanint:%ld\n",sizeof(int));
    printf("Thesizeofareas (int[]):%ld\n",sizeof(areas));
    printf("Thenumberofintsinareas:%ld\n",
    sizeof(areas)/sizeof(int));
    printf("Thefirstareais %d,the2nd%d.\n",areas[0],areas[1]);
     printf("Thesizeofachar:%ld\n",sizeof(char));
    printf("Thesizeofname(char[]):%ld\n",sizeof(name));
    printf("Thenumberofchars:%ld\n",sizeof(name)/sizeof(char));
    printf("Thesizeoffull_name(char[]):%ld\n",sizeof(full_name));
    printf("Thenumberofchars:%ld\n",
    sizeof(full_name)/sizeof(char));
    printf("name=\"%s\"andfull_name=\"%s\"\n",name,full_name);
    return 0;
}