#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age>60)
    {
        printf("You are senior citizon!");
    }
    else if (age>=18)
    {
        printf("You are young!");
    }
    else if (age>=10)
    {
        printf("You are a teenager!!");
    }
    else
    {
        printf("You are a Kid!! Goo Play.");
    }
    
    return 0;
}