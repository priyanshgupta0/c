#include <stdio.h>

int main()
{
    int a, b=0;
    printf("Enter a number\n");
    scanf("%d", &a);

    do
    {
        printf("%d\n", b + 1);
        b = b + 1;
    } while (b < a);

    return 0;
}
