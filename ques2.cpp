#include <iostream>
using namespace std;

void solve()
{
    int N;
    cin>>N;
    int *A=new int[N];
    int *B=new int[N];
    for(int i=0;i<N;i++)
    {
        int temp;
        cin>>temp;
        A[i]=temp;
    }
    for(int i=0;i<N;i++)
    {
        int temp;
        cin>>temp;
        B[i]=temp;
    }
    int res=0;
    for(int i=0;i<N;i++)
    {
        if(A[i]>2*B[i] || B[i]>2*A[i])
            continue;
        else
            res++;
    }
    cout<<res<<endl;
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
