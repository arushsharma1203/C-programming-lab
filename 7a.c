#include<stdio.h>
void main(){
    int m,n,i,j;
    printf("Enter the limits");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the elements");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}