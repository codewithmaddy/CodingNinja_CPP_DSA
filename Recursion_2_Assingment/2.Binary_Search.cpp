#include <iostream>
using namespace std;

int search(int arr[],int s, int e, int x)
{
    if(e>=s)
    {
        int mid = (s+e)/2;
        if(arr[mid] == x)
        {
            return mid;
        }
        
        if(arr[mid] > x)
        {
            return search(arr, s, mid - 1, x);
        }
        
        return search(arr, s, mid + 1, x);
    }
    return -1;
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int *arr = new int[n];
	
	for(int i=0; i<n; i++)
	{
	    cin >> arr[i] ;
	}
	
	int x ;
	cin >> x;
	
	int y = search(arr, 0, n, x);
	
	cout << y <<endl;
	
	return 0;
}
