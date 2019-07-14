#include<stdio.h>
#include<string.h>

void substring(int n,char str[]);

int main()
{
    int i;
    char str[100];
    scanf("%s",str);
    substring(strlen(str),str);
    return 0;
}

void substring(int n, char str[])
{
    int i,j,k,len;
    for(len=1;len<=n;len++){
        for(i=0;i<=n-len;i++){
            j=i+len-1;
            for(k=i;k<=j;k++){
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
}
