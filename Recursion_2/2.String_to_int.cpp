#include <iostream>
#include <math.h>
using namespace std;

int convert(string s, int i, int si)
{
    if(s[i]=='\0')
    {
        return 0;
    }
    return ((s[i]-48)*pow(10, si-i-1)) + convert(s, i+1, si);
}

int main() {
	// your code goes here
	string s;
	cin >> s;
	cout << convert(s, 0, s.size());
	return 0;
}
