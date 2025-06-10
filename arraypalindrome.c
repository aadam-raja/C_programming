#include<stdio.h>
int main() {
int A[5];
int i,j,isPalindrome;
isPalindrome=1;
for(i=0;i<5;i++) {
printf("ENTER NUMBERS %d ",i+1);
scanf("%d",&A[i]); }
for(i=0,j=4;i<j;i++,j--) {
if ( A[i]!= A[j] ){
 isPalindrome=0;
 break;}}
 if(isPalindrome==1)
 printf("PALINDROME");
 else
 printf("NOT A PALINDROME"); 
 return 0; }
