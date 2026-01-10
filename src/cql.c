#include <stdio.h>
#include <string.h>

char currentCommand[1000];

int main()
{
    printf("Welcome to CQL! SQL built in C. To quit, type \"q\"\n\n");

    for (int i = 0; i < 1000; i++)
    {
        scanf("%s", currentCommand);
        // User can quit with "q"
        if (strcmp("q", currentCommand) == 0)
        { break; }
        printf("The command you wrote is %s!\n", currentCommand);
    }
    return 0;
}