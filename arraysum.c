#include<stdio.h>
#define size 5
int main() {
int A[size];
int i,j,sum;
sum=0;
for(i=0;i<5;i++) {
printf("ENTER NUMBERS");
scanf("%d",&A[i]);}
for(j=0;j<5;j++) {
sum+=A[j];}
printf("%d ",sum);
return 0; }