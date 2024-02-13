#include<stdio.h>
#include<string.h>
int main()
{
    char f[20];
    int j=0, count=0, len;
    fgets(f,20,stdin);
    
    while(f[j]!='\0') {
        if(f[j]==' '){
            count++;
        }
        j++;
    }
    printf("%d",count+1);
    return 0;
}
