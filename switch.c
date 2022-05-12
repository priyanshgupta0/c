#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter Yor age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 5:
        printf("Your age is 5");
        break;
    case 15:
        printf("Your age is 15");
        break; 
    case 25:
        printf("Your age is 25");
        break;     
    
    default:
    printf("Your age is not 5,15,25");
        break;
    }
    return 0;
}
