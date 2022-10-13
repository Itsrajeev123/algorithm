#include<stdio.h>

int main(){
    int n; 
    scanf("%d",&n);
    int min;
    int countmin = 0;
    int max;
    int countmax = 0;
    int *score = malloc(sizeof(int) * n);
    for(int i = 0;i < n; i++){
       scanf("%d",&score[i]);
    }
    min = max = score[0];
    for (int i = 1; i < n; i++){
        if (score[i] > max){
            countmax++;
            max = score[i];
        }
        if (score[i] < min){
            countmin++;
            min = score[i];
        }
    }
    printf("%d %d", countmax, countmin);
    return 0;
}
