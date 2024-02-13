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



            for(int ka=0; ka<row-1; ka++) {
                if(arr[ka][y]<arr[ka+1][y]) {
                    t=arr[ka][y];
                    arr[ka][y]=arr[ka+1][y];
                    arr[ka+1][y]=t;

                }
            }

        }
    }
    for(int k=0; k<row; k++) {

        for(int y=0; y<col; y++) {




            for(int ya=0; ya<col-1; ya++) {
                if(arr[k][ya]<arr[k][ya+1]) {
                    t=arr[k][ya];
                    arr[k][ya]=arr[k][ya+1];
                    arr[k][ya+1]=t;

                }

            }
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
