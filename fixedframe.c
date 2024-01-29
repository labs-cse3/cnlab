#include <stdio.h>

int main()
{

    int arr[50], n, f, cut, frameno;
    printf("Enter no.of elements \n");
    scanf("%d", &n);

    printf("Enter elements \n ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter frame size \n ");

    scanf("%d", &f);

    for (int i = 0; i < n; i++)
    {
        cut = i / f;
        frameno = i % f;

        if (frameno == 0)
        {
            printf("frame no %d \n ", cut + 1);
        }
        printf("%d", arr[i]);
        printf("\n");
    }
}