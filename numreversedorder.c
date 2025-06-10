#include<stdio.h>
int main() {
int n,reversednumber,remainder;
reversednumber=0;
printf("ENTER NUMBER:");
scanf("%d",&n);
while(n!=0)
{ remainder= n%10;
reversednumber= reversednumber*10 + remainder;
n/=10; }
printf("THE REVERSED NUMBER IS:%d",reversednumber);
return 0; }