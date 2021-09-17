//Codeforces Problemset-112A
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int len=s1.length();
	for (int i=0;i<len;i++){
		if (isupper(s1[i])){
			s1[i]=tolower(s1[i]);
		}
        if (isupper(s2[i])){
			s2[i]=tolower(s2[i]);
		}
	}
	if (s1==s2) cout<<0<<endl;
	else if (s2<s1) cout<<1<<endl;
	else if (s1<s2) cout<<-1<<endl;
}
