#include <stdio.h>

int main()
{
    int a, b=0;
    printf("Enter a number\n");
    scanf("%d", &a);

    while (b<a)
    {
        printf("%d\n", b);
        b = b + 1;
    }
    

    return 0;
}
