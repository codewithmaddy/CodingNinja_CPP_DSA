#include <iostream>
using namespace std;

string replace_x(string s, int i)
{
    if(s[i]=='\0')
    {
        return "";
    }
    if(s[i]=='x')
    {
        return replace_x(s, i+1);
    }
    return s[i] + replace_x(s, i+1);
    
}

int main() {
	// your code goes here
	string s;
	cin >> s;
	cout<< replace_x(s, 0)<<endl;
	cout<<s;
	return 0;
}
