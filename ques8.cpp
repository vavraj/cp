#include <iostream>
using namespace std;

void solve()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    // int d1;
    // if(a>b)
    //     d1=b;
    // else
    //     d1=a;
    
    // if(abs(a-b)>=n-d1 && c>=n-d1)
    //     cout<<"YES"<<endl;
    // else
    //     cout<<"NO"<<endl;
    if(b>=n && c+a>=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}
