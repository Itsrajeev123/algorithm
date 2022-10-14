#include<bits/stdc++.h>
using namespace std;
const int  maxn=1e5;
int n;
int a[10];
int main(){
    cin>>n;
   
    for(int i=1,x;i<=n;i++){
        cin>>x,a[x]++;
    }
    int ans = 1;
    for (int i=2; i <= 5; i++)
        if (a[i] > a[ans])
        ans = i;
    cout << ans;
    
}
