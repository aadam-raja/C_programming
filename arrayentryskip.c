#include<stdio.h>
int main() {
int A[5];
int i;
for(i=0;i<5;i++) {
printf("ENTER NUMBERS %d ",i+1);
scanf("%d",&A[i]);}
for(i=0;i<5;i++) {
if(A[i]==0)
continue;
printf("%d ",A[i]); }
return 0;}