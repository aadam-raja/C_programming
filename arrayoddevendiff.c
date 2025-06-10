#include<stdio.h>
int main() {
int A[10];
int i,j;
int sum1,sum2;
sum1=0, sum2=0;
for(i=0;i<10;i++){
printf("ENTER NUMBERS %d ",i+1);
scanf("%d",&A[i]);}
for(i=0;i<10;i++) {
if(i%2==0)
{ sum1+= A[i];}
if(i%2!=0)
{ sum2+= A[i];} }
printf(" THE DIFFERENCE BETWEEN THE SUMS IS :%d",sum1-sum2);
return 0;}
