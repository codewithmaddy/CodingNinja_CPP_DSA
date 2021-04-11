#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t > 0)
	{
	    int n;
	    cin >> n;
	    int* arr = new int[n];
	    for(int i=0; i<n; i++)
	    {
	        cin >> arr[i];
	    }
	    int sum =0;
	    for(int i=0; i<n; i++)
	    {
	        sum += arr[i];
	    }
	    int sum2 = ((n-2)*(n-1))/2;
	    cout<<sum - sum2<<endl;
	    t--;
	}
	return 0;
}
