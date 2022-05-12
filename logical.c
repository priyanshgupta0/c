#include <stdio.h>

int main()
{
    int a, b;
    a = 5;
    b = 0;
    
    printf("%d\n", a&&b);
    printf("%d\n", a||b);
    printf("%d\n", !b);
    printf("%d\n", !a);
    return 0;
}