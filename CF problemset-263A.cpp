#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int r=0,c=0;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin>>x;
            if (x){
               r=i;
               c=j;
            }
        }
    }
    cout<<abs(2-r)+abs(2-c)<<"\n";
}
