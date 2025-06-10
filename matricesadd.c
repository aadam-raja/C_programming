#include<stdio.h>
int main() {
int A[3][3];
int B[3][3];
int C[3][3];
int i,j;
for(i=0;i<3;i++) {
for(j=0;j<3;j++) {
printf("ENTER NUMBERS %d  %d ",i+1,j+1);
scanf("%d",&A[i][j]);}}
for(i=0;i<3;i++) {
for(j=0;j<3;j++) {
printf("ENTER NUMBERS %d  %d ",i+1,j+1);
scanf("%d",&B[i][j]);}}
for(i=0;i<3;i++) {
for(j=0;j<3;j++) {
C[i][j] = A[i][j]+B[i][j];
printf("%d",C[i][j]); }
printf("\n"); }
return 0; }

