#include<stdio.h>
int main () {
int A[3][3];
int i,j;
int max,min;
for(i=0;i<3;i++) {
for(j=0;j<3;j++) {
printf("ENTER ENTRIES");
scanf("%d",&A[i][j]); } }
max=A[0][0]; min=A[0][0];
for(i=0;i<3;i++) {
for(j=0;j<3;j++) {
if(A[i][j]> max)
{ max = A[i][j];}
if(min> A[i][j])
{ min= A[i][j];}} }
printf("%d\n",max);
printf("%d\n",min);
return 0; }

