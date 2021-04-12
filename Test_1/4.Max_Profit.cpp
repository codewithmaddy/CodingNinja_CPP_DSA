#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int* arr = new int[n];
	for(int i=0; i<n; i++)
	{
	    cin >> arr[i];
	}
	
	
	sort(arr, arr+n);
	
	reverse(arr, arr+n);
	
	int sum = 0;
	int value = 0;
	
	for(int i=0; i<n; i++)
	{
	    int curr_sum = arr[i]*(i+1);
	    if(curr_sum >= sum)
	    {
	        sum = curr_sum;
	    }
	}
	cout<<sum<<endl;

	return 0;
}
