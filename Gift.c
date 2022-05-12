#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Which of the Exams you pass\n");
    printf("If you passed maths enter 1\n");
    printf("If you passed Scince enter 2\n");
    printf("If you passed both enter 3\n");
    scanf("%d", &a);
    if (a=1,2)
    {
        printf("You get a gift worth of 15 USD!!!!!");
    }
    else
    {
        printf("You get a gift worth of 45 USD!!!!!");
    }
    printf("\nCongrulation!!!!!! Enjoy......!!!!!!!");
    
    return 0;
}