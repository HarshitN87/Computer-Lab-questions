#include<stdio.h>
#include<string.h>

void reva(char a[],int l,int p) {
    int t,m=0,k=l;
    for(int ia=l; ia<p/2; ia++) {
        t=a[ia];
        a[ia]=a[p-ia-1];
        a[p-ia-1]=t;
    }

}
int main()
{   int t;
    char f[200],ta[200],ch1[20], ch2[20];
    gets(f) ;
    strcpy(ta,f);
    int k;
    int j=0,l=0,w=0,p,count=0,comp=0,i=0,len;
    len=strlen(f) ;
    f[len]=' ';
    f[len+1]='\0';
    int n=2;
    char c[10];
    while(f[i]!='\0') {
        while((f[i]!=' ')&&(f[i]!='\0')) {
            i++;
            l++;
        }
        reva(f,i-l, i+i-l) ;
        l=0;
        i++;
    }
    i=0,l=0;
    int ol=0, mn=0,big=0,ind1, ind2;
    while(f[i]!='\0') {
        while((f[i]!=' ')&&(f[i]!='\0')) {
            ch1[l]=f[i];
            l++;
            i++;
        }
        ch1[l]='\0';
        while((ta[ol]!=' ')&&(ta[ol]!='\0')) {
            ch2[mn]=ta[ol];
            ol++;
            mn++;
        }
        ch2[mn]='\0';

        if(l==mn) {
            comp=strcmp(ch1,ch2);
        }
        if(comp==0) {
            if(l>big) {
                ind1=i-l;
                ind2=i;
                big=l;
            }
        }
        mn=0;
        ol++;
        l=0;
        i++;
    }
    if(big!=0) {
        printf("The biggest palindrome in the string is: ");
        for(int m=ind1; m<ind2; m++) {
            printf("%c",ta[m]);
        }
    }
    else {
        printf("The string has no palindrome word");
    }


    return 0;
}
