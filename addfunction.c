#include<stdio.h>

int sum(int a , int b)
{
    return a+b;
}
int main(int argc, char const *argv[])
{
    int a=52 , b  , c;
    c = sum(a,b);
   
    printf("The sum of a and b is %d\n", c);
    return 0;
}
