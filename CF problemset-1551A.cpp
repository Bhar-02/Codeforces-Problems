//Codeforces Problemset-1551A
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
	int t;//input no. of testcases
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int a=n/3;
		if (n%3==0){
			cout<<a<<" "<<a<<endl;
		}
		if (n%3==1){
			cout<<a+1<<" "<<a<<endl;
		}
		if (n%3==2){
			cout<<a<<" "<<a+1<<endl;
		}
	}
}
