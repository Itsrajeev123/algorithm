#include<stdio.h>
int main(){
    int n=3,al=0,bb=0;
    int i,a[3],b[3];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
    {
        al+=0;
        bb+=0;
    }
    else if(a[i]>b[i])
    {
        al+=1;
        bb+=0;
    }
    else
    {
        al+=0;
        bb+=1;
    }
}
printf("%d %d",al, bb);
}
