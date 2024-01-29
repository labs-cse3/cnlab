#include <stdio.h>

int main()
{

    int arr[50], n, f, i, k, j;

    printf("Enter no. of elements: \n");
    scanf("%d", &n);

    printf("Enter Elements: \n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    i = 0, j = 1;
    while (i < n)
    {

        printf("Enter size of frame: ");
        scanf("%d", &f);

        printf("Frame no %d \n", j);

        for (k = 0; k < f; k++)
        {

            printf("%d", arr[i]);
            i++;
            if (i > n - 1)
            {
                break;
            }
        }
        j++;
        printf("\n");
    }
}