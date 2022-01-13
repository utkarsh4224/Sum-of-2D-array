#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of coloums: ");
    scanf("%d",&c);
    int array1[r][c],array2[r][c],sum[r][c],i,j;
    for(i=0; i<r; i++) {
        for(j=0;j<c;j++) {
            printf("Enter value for array1[%d][%d]:", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    for(i=0; i<r; i++) {
        for(j=0;j<c;j++) {
            printf("Enter value for array2[%d][%d]:", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
    for(i=0; i<r; i++) {
        for(j=0;j<c;j++) {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    printf("Two Dimensional array1: \n");
    for(i=0; i<r; i++) {
        for(j=0;j<c;j++) {
            printf("%d ",array1[i][j]);
            if(j==r-1){
                printf("\n");
            }
        }
    }
    printf("Two Dimensional array2: \n");
    for(i=0; i<r; i++) {
        for(j=0;j<c;j++) {
            printf("%d ",array2[i][j]);
            if(j==r-1){
                printf("\n");
            }
        }
    }
    printf("array1 + array2: \n");
    for(i=0; i<r; i++) {
        for(j=0;j<c;j++) {
            printf("%d ",sum[i][j]);
            if(j==r-1){
                printf("\n");
            }
        }
    }
    return 0;
}
