#include <iostream>
#include<climits>
using namespace std;

int solve()
{
    int n,s;
    cin>>n>>s;
    int maxi=INT_MIN;
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=i;j<=n;j++)
    //     {
    //         if(i+j==s && abs(i-j)>maxi)
    //         {
    //             maxi=abs(i-j);
    //         }
    //     }
    // }
    if(n>=s)
        return s;
    else
        return abs(n- (s-n));
    return maxi;
    
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
	return 0;
}
