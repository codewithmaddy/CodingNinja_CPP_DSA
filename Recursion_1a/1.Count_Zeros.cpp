#include <iostream>
using namespace std;

int count_zero(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int z=0;
    if(n%10 == 0)
    {
        z=1;
    }
    return z+count_zero(n/10);
}

int main() {
	// your code goes here
	int m;
	cin >> m;
	cout<<count_zero(m);
	return 0;
}
