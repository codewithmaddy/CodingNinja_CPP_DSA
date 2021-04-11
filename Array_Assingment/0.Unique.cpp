#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n ;
	    unsigned int *arr = new unsigned int[n];
	    for(int i=0; i<n; i++)
	    {
	        cin >> arr[i];
	    }
	    unsigned int sum = arr[0];
	    for(int i=1 ; i<n ; i++)
	    {
	        sum = sum ^ arr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
