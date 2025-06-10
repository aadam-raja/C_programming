#include<stdio.h>
int main () {
int A[5];
int i,j;
for(i=0;i<5;i++) {
printf("ENTER NUMBERS %d",i+1);
scanf("%d",&A[i]); }
for(i=0;i<5;i++) {
for(j=i+1;j<5;j++)
{ if(A[i]==A[j]) { 
printf("%d",A[i]);
break;}}}
return 0; }
