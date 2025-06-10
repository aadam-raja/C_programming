#include<stdio.h>
int main() {
int originalnumber,remainder,reversednumber,n;
reversednumber=0;
printf("ENTER NUMBER");
scanf("%d",&n);
originalnumber=n;
while(n!=0) {
remainder= n%10;
reversednumber= reversednumber*10 + remainder;
n/=10;}
(originalnumber==reversednumber)?printf("IT IS A PALINDROME"):printf("IT IS NOT A PALINDROME");
return 0; }

