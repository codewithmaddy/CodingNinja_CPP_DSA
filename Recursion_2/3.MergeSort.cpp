#include <iostream>
using namespace std;

void merge(int arr[], int s, int m, int e)
{
    int n1 = m - s + 1 ;
    int n2 = e - m ;
    
    int L[n1], R[n2];
    
    for(int i=0; i<n1; i++)
    {
        L[i] = arr[s + i];
    }
    
    for(int i=0; i<n2; i++)
    {
        R[i] = arr[m + 1 + i];
    }
    
    int i=0, j=0, k=s;
    
    while(i < n1 && j < n2)
    {
        if(L[i] < R[j])
        {
            arr[k] = L[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = R[j];
            k++;
            j++;
        }
    }
    
    while(j < n2)
    {
        arr[k] = R[j];
        k++;
        j++;
    }
    
    while(i < n1)
    {
        arr[k] = L[i];
        k++;
        i++;
    }
}

void mergesort(int arr[], int s, int e)
{
    if(s >= e)
    {
        return;
    }
    
    int m = (s+e)/2;
    
    mergesort(arr, s, m);
    mergesort(arr, m+1, e);
    
    merge(arr, s, m, e);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n ; i++)
	{
	    cin >> arr[i];
	}
	
	mergesort(arr, 0, n);
	
	for(int i=0; i<n ; i++)
	{
	    cout << arr[i] << " ";
	}
	return 0;
}
