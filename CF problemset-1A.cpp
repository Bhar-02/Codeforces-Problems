//Codeforces problemset-1A
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long m,n,a;
    cin>>m>>n>>a;
    long long res=1;
    res=(m%a==0)?m/a:m/a+1;
    res=res*(n%a==0?n/a:n/a+1);
    cout<<res<<endl;
}
