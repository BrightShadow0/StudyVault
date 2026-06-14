#include<stdio.h>
int main(){
    int i = 2*3/4+4/4+8-2+5/8; //computer seperates ++-- stuff, then goes in L to R order, solving in blocks
    printf("%d",i);
}