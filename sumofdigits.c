#include<stdio.h>
int main() {
int n,remainder,sum;
sum=0;
printf("ENTER NUMBER");
scanf("%d",&n);
while(n!=0)
{ remainder = n%10;
sum+= remainder;
n/=10; }
printf("sum of digits : %d",sum);
return 0; }
