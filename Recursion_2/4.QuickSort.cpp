#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int si, int ei)
{
    if(si >= ei)
    {
        return;
    }
    
    int pi = partition(arr, si, ei);
    
    quicksort(arr, si, pi - 1);
    quicksort(arr, pi + 1, ei);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
	    cin >> arr[i];
	}
	
    quicksort(arr, 0, n);
	
	for(int i=0; i<n; i++)
	{
	    cout << arr[i] << " " ;
	}
	cout<<endl;
	return 0;
}
