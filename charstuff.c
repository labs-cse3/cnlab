#include <stdio.h>
#include <string.h>
int main()
{

    char s[50];

    printf("Enter String \n");
    gets(s);

    char a[4] = {'D', 'L', 'E', '\0'};

    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D' && s[i + 1] == 'L' && s[i + 2] == 'E')
        {
            strcat(s, a);
        }
    }

    printf("The String is STXDLE %s  DLEETX", s);
}