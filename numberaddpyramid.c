#include<stdio.h>
int main() {
    int i,j,k,num;
    num=0;
    for(i=1;i<=4;i++) {
    for(j=1;j<=4-i;j++)
    { printf(" ");}
    for(k=1;k<=i;k++)
    { num++;
    printf("%d ",num); }
    printf("\n"); }
    return 0; }