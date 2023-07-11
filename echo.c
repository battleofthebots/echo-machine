#include <stdio.h>

int main(){
    char input[512];

    puts("Welcome to Void. Just a quick echo testing machine");
    gets(input);
    printf("Echoing back %s\n", input);
}