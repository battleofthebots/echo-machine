#include <stdio.h>

void test(){
    asm("pop %rdi;");
}

void test2(){
    asm("pop %rsi; pop %r15; ret;");
}


void admin(long first, long second)
{
    if (first == 0xdeadbeefdeadbeef && second == 0xc0debabec0debabe){
        system("/bin/sh");
    }else{
        printf("Unauthorised access to secret function detected, authorities have been alerted!!\n");
    }
}

void void_machine()
{
    char buffer[16];

    printf("Welcome to Void. Just a quick echo testing machine:\n");
    scanf("%s", buffer);
    printf("Hi there, %s\n", buffer);    
}

int main()
{
    void_machine();

    return 0;
}
