#include<stdio.h>
int main() {
int A[35];
int i;
for(i=0;i<35;i++) {
printf("ENTER MARKS");
scanf("%d",&A[i]); }
for(i=0;i<35;i++) {
    if(A[i]<35)
    { printf("%d",A[i]);}
}
return 0; }