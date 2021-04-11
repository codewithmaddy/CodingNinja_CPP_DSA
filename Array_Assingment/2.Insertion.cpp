#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t > 0)
	{
	    int n, m;
	    
	    cin >> n;
	    int* arr1 = new int[n];
	    
	    for(int i=0; i<n ;i++)
	    {
	        cin >> arr1[i];
	    }
	    
	    cin >> m;
	    int* arr2 = new int[m];
	    
	    for(int i=0; i<m ; i++)
	    {
	        cin >> arr2[i];
	    }
	    
	    sort(arr1, arr1+n);
	    sort(arr2, arr2+m);
	    
	    int i=0, j=0;
	    
	    while(i<n && j<m)
	    {
	        if(arr1[i] == arr2[j])
	        {
	            cout<<arr1[i]<<" ";
	            i++;
	            j++;
	        }
	        else if(arr1[i]<arr2[j])
	        {
	            i++;
	        }
	        else
	        {
	            j++;
	        }
	    }
	    
	    t--;
	}
	return 0;
}
