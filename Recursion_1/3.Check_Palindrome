#include <iostream>
using namespace std;

bool palindrome(string s, int start, int end)
{
    if(end <= start)
    {
        return true;
    }
    else if(s[start]==s[end-1])
    {
        
        return palindrome(s, start+1, end-1);
    }
    else
    {
        return false;
    }
}

int main() {
	// your code goes here
	string s;
	cin >> s;
	palindrome(s, 0, s.size())?cout<<"true":cout<<"flase";
	return 0;
}
