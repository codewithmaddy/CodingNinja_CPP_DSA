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
	    
	    int d;
	    cin >> d;
	    
	    int* t_arr = new int[d];
	    for(int i=0; i<d; i++)
	    {
	        t_arr[i] = arr[i];
	    }
	    
	    for(int i=0; i<n-d; i++)
	    {
	        arr[i] = arr[i+d];
	    }
	    
	    for(int i=0; i<d; i++)
	    {
	        arr[n+i-d] = t_arr[i];
	    }
	    
	    for(int i=0; i<n; i++)
	    {
	        cout<< arr[i]<< " ";
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
