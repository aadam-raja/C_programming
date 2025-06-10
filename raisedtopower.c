#include<stdio.h>
#include<math.h>
int main () {
int a,b;
long long exponent;
printf("ENTER BASE:");
scanf("%d",&a);
printf("ENTER POWER:");
scanf("%d",&b);
exponent=pow(a,b);
printf("%d",exponent);
return 0; }