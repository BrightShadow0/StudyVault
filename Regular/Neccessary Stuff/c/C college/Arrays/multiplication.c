#include <stdio.h>
int main(){
int a[2][3],b[3][2],c[2][2],i,j,k;

for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<2;i++){
    for(k=0;k<2;k++){
        c[i][k]=0;
    for(j=0;j<3;j++){
        c[i][k]+=a[i][j]*b[j][k];
        }
    }
}

for(i=0;i<2;i++){
    for(k=0;k<2;k++){
        printf("%d\t",c[i][k]);
    }
    printf("\n");
}

    return 0;
}