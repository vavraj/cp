#include <iostream>
#include<climits>
using namespace std;

void solve()
{
    int n,x;
    cin>>n>>x;
    int highestRating=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int s,r;
        cin>>s>>r;
        if(s<=x)
        {
            highestRating=max(highestRating,r);
        }
    }
    cout<<highestRating<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
