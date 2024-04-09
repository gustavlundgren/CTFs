#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXFLAGSIZE 64

void main()
{
    char password[32];
    char flag[MAXFLAGSIZE];

    FILE *f = fopen("flag.txt", "r");
    if (f == NULL)
    {
        printf("%s %s", "Please create 'flag.txt' in this directory with your",
               "own debugging flag.\n");
        exit(0);
    }

    fgets(flag, MAXFLAGSIZE, f);

    printf("För att min flagga ska vara säker behöver du skriva rätt lösenord för att se den!\n");
    printf("Lösen: ");
    scanf("%s", password);

    if (strcmp(password, "5vV56?EITSKX") == 0)
    {
        printf(flag);
    } else {
        printf("Fel lösenord!");
        exit(0);
    }
}