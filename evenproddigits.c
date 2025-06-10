#include<stdio.h>
int main() {
int n,remainder,product;
product=1;
printf("ENTER NUMBER");
scanf("%d",&n);
while(n!=0)
{ remainder=n%10;
if(remainder%2==0)
 {product*=remainder;}
 n/=10; }
 printf("product of even digits is:%d",product);
 return 0; }