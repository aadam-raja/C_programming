#include<stdio.h>
int main() {
int A[5];
int i,j,product;
product=1;
for(i=0;i<5;i++) {
printf("ENTER NUMBERS");
scanf("%d",&A[i]);}
for(j=0;j<5;j++) {
product*=A[j];}
printf("%d",product);
return 0;}
