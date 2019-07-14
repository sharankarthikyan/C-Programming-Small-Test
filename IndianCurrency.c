//Indian currency

#include <stdio.h>

int main()
{
    int i=0,j=0,n;
    int a[10]={2000,500,200,100,50,20,10,5,2,1};
    int b[10]={0};
    int count[10]={0};
    scanf("%d",&n);
    
    while(i<10)
    {
        if(n>=a[i]){
            b[j]=a[i];
            n=n-a[i];
            count[i]++;
            j++;
            i=-1;
        }
        if(n==0){
            break;
        }
        i++;
    }
    for(i=0;i<10;i++){
        if(count[i]>=1){
            printf("%d : %d\n",count[i],a[i]);
        }
    }
    
    return 0;
}
