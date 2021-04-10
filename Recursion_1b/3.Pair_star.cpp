#include <iostream>
using namespace std;

string pair_S(string s, int i)
{
    if(s[i]=='\0')
    {
        return "";
    }
    if(s[i]==s[i+1])
    {
        string str = '*' + pair_S(s, i+1);
        return  s[i] + str;
    }
    return s[i] + pair_S(s, i+1);
    
}

int main() {
	// your code goes here
	string s;
	cin >> s;
	cout<< pair_S(s, 0)<<endl;
	return 0;
}