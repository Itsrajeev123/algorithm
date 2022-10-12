#include<stdio.h>
int main(){
    long int arr[100];
    int n;
    scanf("%d",&n);
    long int sum;
    sum=0;
    for(int i=0;i<n;i++)
        scanf("%li",&arr[i]);
     for(int i=0;i<n;i++){
      sum=sum+arr[i];
     }
    printf("%li",sum);
    return 0;
}
