#include <stdio.h>
int main()
{ 
 float P, R, T ,Si;
 printf("Enter P amount\n");
 scanf("%f", &P);
 printf("Enter R amount\n");
 scanf("%f", &R);
 printf("Enter T amount\n");
 scanf("%f", &T);
 Si  = (P*R*T)/100;   
 printf("\n\n Simple Interest is : %f", Si);
 return 0; 
}