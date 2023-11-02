#include <iostream>
#include<climits>
using namespace std;

string solve()
{
    int n;
    cin>>n;
    int *addy=new int[n];
    int *om=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>addy[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>om[i];
    }
    int maxAddy=INT_MIN;
    int maxOm=INT_MIN;
    int countAddy=0;
    int countOm=0;
    for(int i=0;i<n;i++)
    {
        if(addy[i]==0)
        {
            
            countAddy=0;
        }
        else{
            maxAddy=max(maxAddy,countAddy);
            countAddy++;
        }
        if(om[i]==0)
        {
            
            countOm=0;
        }
        else{
            maxOm=max(maxOm,countOm);
            countOm++;
        }
    }
    if(maxOm>maxAddy)
    {
        return "Addy";
    }
    else if(maxAddy>maxOm)
    {
        return "Om";
    }
    else
    {
        return "Draw";
    }
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
