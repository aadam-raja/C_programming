#include<stdio.h>
int main () {
int A[30],B[30];
int i;
for(i=0;i<30;i++) {
printf("ENTER NUMBERS %d ", i+1);
scanf("%d",&A[i]); }
for(i=0;i<30;i++) {
B[i] = A[i];
printf("%d ",B[i]);}
return 0; }

