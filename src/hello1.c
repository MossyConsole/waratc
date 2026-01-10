#include <stdio.h>

int main()
{
    printf("Hello World!\n");

    char* name;
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello %s!\n", name);

    return 0;
}