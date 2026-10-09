#include <stdio.h>
int main()
{
int a[2][3], t[3][2], i, j;

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        t[i][j]=a[j][i];
        printf("%d",t[i][j]);
    }
    printf("\n");
}

return 0;
}