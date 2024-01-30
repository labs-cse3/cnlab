#include <stdio.h>
#include <string.h>
int main()
{

    char s[5],d[10];

    printf("Enter String \n");
    gets(s);

    char a[4] = {'D', 'L', 'E', '\0'};

    int n = strlen(s),j=0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'D' && s[i + 1] == 'L' && s[i + 2] == 'E')
        {
            for(int k = 0;k < 3;k++)
            {
                 d[j]=s[i];
                 i++;
                 j++;
            }
            i = i-3;
             for(int k = 0;k < 3;k++)
            {
                 d[j]=s[i];
                 i++;
                 j++;
            }
            i = i-2;
        }
        else{
                d[j]=s[i];
                j++;
        }
    }

    printf("The String is STXDLE %s  DLEETX", d);
}
