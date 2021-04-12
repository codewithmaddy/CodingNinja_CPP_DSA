#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t>0)
	{
	    int n;
	    cin >> n;
	    
	    int* arr = new int[n];
	    for(int i=0; i<n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int min = arr[0];
	    int min_in = 0;
	    
	    for(int i=0; i<n ;i++)
	    {
	        if(min > arr[i])
	        {
	            min = arr[i];
	            min_in = i;
	        }
	    }
	    
	    cout<<min_in<<endl;
	    t--;
	}
	return 0;
}
