#include <stdio.h>

int main()
{
    int a[5][5], b[5][5];
    int i, j, size;
    printf("enter no of messages\n");
    scanf("%d", &size);
    printf("enter sender side message \n");
    for (i = 0; i < size; i++)
    {
        
        for ( j = 0; j < 5; j++)
        {
                scanf("%d", &a[i][j]);
        }
        
    }
    printf("enter reciver side message \n");
    for (i = 0; i < size; i++)
    {
        
        for ( j = 0; j < 5; j++)
        {
                scanf("%d", &b[i][j]);
        }
    }
    int c[5],d[5],flag=0;
    for (i = 0; i < size; i++)
    {
        c[i]=0;
        d[i]=0;
        for ( j = 0; j < size; j++)
        {
                c[i]+=a[j][i];
                d[i]+=b[j][i];
        }
    }
    printf("sender side checksum : ");
    for (i = 0; i < size; i++)
    {
        printf("%d",c[i]);
    }
    printf("\nreciver side checksum : ");
    for (i = 0; i < size; i++)
    {
        printf("%d",d[i]);
    }
    for (i = 0; i < size; i++)
    {
       if(c[i]!=d[i]){
        flag = 1;
        break;
       }
    }
    if(flag==0)
    printf("\nno error\n");
    else
    printf("error");

    return 0;
    
}