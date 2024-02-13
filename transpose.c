#include<stdio.h>

int main()
{
int t,col,row;
printf("Enter row\n");
scanf("%d",&row);
printf("Enter column\n");
scanf("%d",&col);
int arr[row][col];
printf("Enter matrix elements\n");
 for(int u=0; u<row; u++) {
        for(int ua=0; ua<col; ua++) {
            scanf("%d",&arr[u][ua]);
        }
 }
for(int k=0; k<row; k++) {
        
    for(int y=0; y<col; y++) {
     if(k>=y) {
        t=arr[k][y];
        arr[k][y]=arr[y][k];
        arr[y][k]=t;}
        }
    }

    for(int u=0; u<row; u++) {
        for(int ua=0; ua<col; ua++) {
            printf(" %d ",arr[u][ua]);
        }
        printf("\n");
    }

    return 0;
}
