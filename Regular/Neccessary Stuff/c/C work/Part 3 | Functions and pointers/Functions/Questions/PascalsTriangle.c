#include <stdio.h>
int fac(int n){
if(n>0)
return n * fac(n-1);
else if(n==0)
return 1;
else return 0;
}
int nCr (int n, int r){
    return fac(n) / (fac(r) * fac(n-r));
}

int main(){
    
int n,r;

    printf("Enter total options(n): ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){ 
        printf("%d ",nCr(i,j));
    }
    printf("\n");
    }

    return 0;
}