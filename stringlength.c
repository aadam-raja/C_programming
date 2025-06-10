#include<stdio.h>
int main() {
char A[] = {"IUST AWANTIPORA"};
int i, length;
length =0;
for(i=0;A[i]!= '\0';i++)
{ length++; }
printf("%d",length);
return 0; }