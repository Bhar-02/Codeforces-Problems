#include <bits/stdc++.h>
using namespace std;
void words(string s){
    int l=s.length();
    if (l>10) cout<<s[0]<<l-2<<s[l-1]<<"\n";
    else cout<<s<<"\n";
}
int main(){
    int n;
    cin>>n;
    while (n--){
        string s;
        cin>>s;
        words(s);
    }
    return 0;
}
