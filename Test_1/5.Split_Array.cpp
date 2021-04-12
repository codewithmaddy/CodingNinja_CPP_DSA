#include <iostream>
using namespace std;

bool split_helper(int arr[], int s, int e, int lsum, int rsum)
{
    if(s==e)
    {
        return lsum == rsum;
    }
    
    if(arr[s]%5 == 0)
    {
        lsum += arr[s];
    }
    else if(arr[s]%3 == 0)
    {
        rsum += arr[s];
    }
    else
    {
        return split_helper(arr, s+1, e, lsum + arr[s], rsum) ||
               split_helper(arr, s+1, e, lsum ,rsum + arr[s]);
    }
    return split_helper(arr, s+1, e, lsum, rsum);
}

bool split_array(int arr[], int n)
{
    return split_helper(arr, 0, n, 0, 0);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i=0; i<n ;i++)
	{
	    cin >> arr[i];
	}
	
	cout<<split_array(arr, n);
	
	return 0;
}
