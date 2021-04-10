#include <iostream>
#include<math.h>
using namespace std;

float Geometric_Sum(int n)
{
    if(n==0)
    {
        return 1;
    }
    return 1/(pow(2, n)) + Geometric_Sum(n-1);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << Geometric_Sum(n)<<endl;
	return 0;
}
