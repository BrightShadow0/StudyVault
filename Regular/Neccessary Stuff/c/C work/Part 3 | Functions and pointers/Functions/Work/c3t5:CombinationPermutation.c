#include <stdio.h>

int fac(int x){
    if(x>0){
    return x * fac(x-1);}
    else if(x==0){
    return 1;}
    return 10;
}

int main(){

int n,r;

    printf("Enter total options(n): ");
    scanf("%d",&n);
    printf("Enter selections(r): ");
    scanf("%d",&r);

    if(n>=r){
    int nCr = fac(n) / (fac(r) * fac (n-r));
    printf("\nPossible combinations(nCr): %d\n",nCr);
    int nPr = fac(n) / fac (n-r);
    printf("Possible permutations(nPr): %d\n\n",nPr);
    }
else
    printf("Invalid format");

    return 0;
}