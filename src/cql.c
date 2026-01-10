#include <stdio.h>

char* cur_command;

int main()
{
    for (int i = 0; i < 1000; i++)
    {
        scanf("%s", cur_command);
        printf("The command you wrote is %s!", cur_command);

    }
    return 0;
}