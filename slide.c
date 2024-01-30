#include <stdio.h>
int main()
{

    int w, i, f, frames[50];
    printf("Enter window size: ");

    scanf("%d", &w);
    printf("\n Enter number of Frames to transmit: \n ");
    scanf("%d", &f);
    printf("\n Enter %d frames: \n", f);
    for (i = 0; i < f; i++)
    {
        scanf("%d", &frames[i]);
    }
    printf("\n with sliding window protocol the frames will be sent in the following manner \n");
    printf("After sending %d frames Waits for acknowledgment sent at each stage sender stage receiver \n ", w);
    for (i = 0; i < f; i++)
    {
        if (i % w == 0)
        {
            printf("%d", frames[i]);
            printf("Acknowledgement of above frame sent by sender received \n");
        }
        else
        {
            printf("%d", frames[i]);
        }
    }
    if (f % w != 0)
    {
        printf("Acknowledgement of above frame sent by sender received \n");
    }
}