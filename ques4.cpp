#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A,B,X;
	    cin>>A>>B>>X;
	    int years=0;
	    while(A<B)
	    {
	        A=A+X;
	        years++;
	    }
	    cout<<years<<endl;
	}
	return 0;
}
