#include <stdio.h>

int main() {

    char * Names[14];
    Names[13] = "Grant";
    Names[1] = "Cool";

    printf("Hello, %s %s!\n", Names[1], Names[13]);

    char * Amazing;
    Amazing = "Great";
    printf("I am %s", Amazing);

    return 0;
}
