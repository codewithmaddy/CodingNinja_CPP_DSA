#include <iostream>
using namespace std;

int multiply(int n, int m){
    if(n==0 || m ==0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return m;
    }
    else
    {
        return m + multiply(n-1, m);
    }
}

int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	cout<<multiply(n, m);
	return 0;
}
