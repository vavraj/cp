/*
Chef visited a grocery store for fresh supplies. There are 
�
N items in the store where the 
�
�
ℎ
i 
th
  item has a freshness value 
�
�
A 
i
​
  and cost 
�
�
B 
i
​
 .

Chef has decided to purchase all the items having a freshness value greater than equal to 
�
X. Find the total cost of the groceries Chef buys.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
�
N and 
�
X — the number of items and the minimum freshness value an item should have.
The second line contains 
�
N space-separated integers, the array 
�
A, denoting the freshness value of each item.
The third line contains 
�
N space-separated integers, the array 
�
B, denoting the cost of each item.

*/


#include <iostream>
using namespace std;

void solve()
{
    int N,X;
	    cin>>N>>X;
	    int *A=new int[N];
	    for(int i=0;i<N;i++)
	    {
	       int temp;
	       cin>>temp;
	       A[i]=temp;
	    }
	    int *B=new int[N];
	    for(int i=0;i<N;i++)
	    {
	       int temp;
	       cin>>temp;
	       B[i]=temp;
	    }
	    int sum=0;
	    for(int i=0;i<N;i++)
	    {
	        if(A[i]>=X)
	        {
	            sum+=B[i];
	        }
	    }
	    cout<<sum<<endl;
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
