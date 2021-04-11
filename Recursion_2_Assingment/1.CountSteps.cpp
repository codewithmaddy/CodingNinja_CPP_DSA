#include <iostream>
using namespace std;

int cstep(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    return cstep(n-3) +
            cstep(n-2) +
            cstep(n-1);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int steps = cstep(n);
	
	cout<< steps << endl;
	
	return 0;
}
