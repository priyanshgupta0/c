#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b;
    printf("Enter number a\n");
    scanf("%d", &a); 

    printf("Enter number b\n");
    scanf("%d", &b);
int c = a+b;
    printf("The Sum is %d and\n", c);

    if(c%2==0){
        printf("The Number is Even");
    }else{
        printf("The Number is Odd");
    }
    return 0;
}
