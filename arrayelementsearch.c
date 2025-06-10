#include<stdio.h>
int main() {
int A[5];
int i,num;
for(i=0;i<5;i++) {
printf("ENTER NUMBERS %d ",i+1);
scanf("%d",&A[i]); }
printf("ENTER NUMBER YOU WANT TO SEARCH ");
scanf("%d",&num);
for(i=0;i<5;i++)
{ if(A[i]==num){
printf("NUMBER IS PRESENT");
break; }}
return 0;}