#include<stdio.h>

int takenumber(){
    int n;
    printf("Enter a Number\n");
    scanf("%d", &n);
    return n;
}
int main(int argc, char const *argv[])
{
    int c;
    c = takenumber();
    printf("Entered number is %d\n", c);
    return 0;
}
