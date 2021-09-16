#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d[n-1];
    for (int i=0;i<n-1;i++){
        cin>>d[i];
    }
    int a,b;
    cin>>a>>b;
    int yrs=0;
    for (int i=a;i<b;i++){
        yrs+=d[i-1];
    }
    cout<<yrs<<endl;
}
