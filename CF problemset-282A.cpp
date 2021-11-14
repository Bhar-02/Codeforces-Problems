#include <bits/stdc++.h>
using namespace std;
void bits(int n){
    int x=0;
    for (int i=1;i<=n;i++){
        string s;
        cin>>s;
        if (s=="++X") ++x;
        else if (s=="X++") x++;
        else if (s=="--X") --x;
        else x--;
    }
    cout<<x<<"\n";
}
int main(){
    int n;
    cin>>n;
    bits(n);
}
