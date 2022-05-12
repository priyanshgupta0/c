#include <stdio.h>

int main()
{
    int a, i , j;
    printf("Enter a number\n");
    scanf("%d", &a);

   for ( i = 0, j = 0; i < 5 , j < a; i++ , j++)
   {
       printf("%d %d\n", i , j);

   }
   
    return 0;
}
