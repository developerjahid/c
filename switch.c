#include <stdio.h>

int main()
{

    printf("Please enter a number between 1 to 3.\n");
    int num;
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("it is one.\n");
        break;
    case 2:
        printf("it is two.\n");
        break;
    case 3:
        printf("it is three.\n");
        break;

    default:
        printf("Please enter a number between 1 to 3.\n");
        break;
    }
    return 0;
}