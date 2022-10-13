#include<stdio.h>
int main(){
    int x1,v1,x2,v2;
    int catch= 0;
    
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    
    
    if (x1 == x2) {
        catch = 1;
    }
    
    for (int i = 0; catch == 0 && x1 <= x2; i++) {
        x1 += v1;
        x2 += v2;
        
        if (x1 == x2) {
            catch = 1;
            break;
        }
    }
    
    if (catch == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
}
