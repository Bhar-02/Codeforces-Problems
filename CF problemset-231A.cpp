#include <bits/stdc++.h>
using namespace std;
void prob(int n){
    int s=0;
    for (int i=1;i<=n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if ((a+b+c)>=2) s++;
    }
    cout<<s<<"\n";
}
int main(){
    int n;
    cin>>n;
    prob(n);
    return 0;
}
