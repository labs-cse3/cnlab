#include <stdio.h>
#include <string.h>

int main()
{

    char data[100];

    printf("Enter the data : ");

    scanf("%s", data);

    char stuff[200];

    int count = 0;
    int j = 0;

    for (int i = 0; i < strlen(data); i++)
    {
        stuff[j] = data[i];
        j++;
        if (data[i] == '1')
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count == 5)
        {
            stuff[j] = '0';
            j++;
            count = 0;
        }
    }
    printf("The Stuffed data: %s \n", stuff);
}