#include<stdio.h>
int main() {
int A[3][3];
int i,j;
int temp;
for(i=0;i<3;i++) {
for(j=0;j<3;j++) 
{ printf("ENTER ENTRIES %d %d ", i+1,j+1);
  scanf("%d",&A[i][j]); } }
for(i=0;i<3;i++) {
for(j=0;j<3;j++) 
{ temp= A[i][j];
   A[i][j] = A[j][i];
   A[j][i] = temp; } }
for(i = 0; i < 3; i++) {
 for(j = 0; j < 3; j++) {
 printf("%d ", A[i][j]); }

  printf("\n"); }
  return 0;}
  

