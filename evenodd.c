#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    printf("Enter number x\n");
    scanf("%d", &x); 
    if(x%2==0){
        printf("Number is Even");
    }else{
        printf("Number is Odd");
    }
    return 0;
}
