#include <bits/stdc++.h>
using namespace std;
void scores(int n,int k,int arr[]){
    int c=0;
    for (int i=0;i<n;i++){
        if (arr[i]>=arr[k-1] && arr[i]!=0) c++;
    }
    cout<<c<<"\n";
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    scores(n,k,arr);
    return 0;
}
