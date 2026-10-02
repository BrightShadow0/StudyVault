#include <stdio.h>
int main(){
int a[10][10],b[10][10],prod[10][10],m,n,p,i,j,k;
scanf("%d%d%d",&m,&n,&p);

for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

for(i=0;i<n;i++)
for(j=0;j<p;j++)
scanf("%d",&b[i][j]);

for(i=0;i<m;i++){
for(j=0;j<p;j++){
prod[i][j]=0;
for(k=0;k<n;k++)
prod[i][j]+=a[i][k]*b[k][j];
printf("%d ",prod[i][j]);
}
printf("\n");
}

return 0;
}
