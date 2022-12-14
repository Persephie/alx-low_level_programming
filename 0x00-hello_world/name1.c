#include <stdio.h>

int main()
{
        char name[7];
        printf("What is your first name? ");
        scanf("%s", name);

        char name2[7];
        printf("What is your second name? ");
        scanf("%s", name2);

        printf("Hello %s %s.\n", name, name2);
        printf("You look great.\n");
        return 0;
}

