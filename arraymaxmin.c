#include<stdio.h>
int main() {
int A[5];
int i,max,min;
printf("ENTER FIRST ELEMENT");
scanf("%d",&A[0]);
max=A[0]; min= A[0];
for(i=1;i<5;i++) {
printf("ENTER NUMBERS",i+1);
scanf("%d",&A[i]);
if(A[i]>max)
{ max= A[i];}
if(min>A[i])
{min = A[i];} }
printf(" max of array: %d",max);
printf("min of array : %d",min);
return 0; }