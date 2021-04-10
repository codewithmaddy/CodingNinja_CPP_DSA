#include <iostream>
using namespace std;

string replace_pi(string s, int i)
{
    if(s[i]=='\0')
    {
        return "";
    }
    if(s[i]=='p')
    {
        if(s[i+1]=='i')
        {
            return "3.14" + replace_pi(s, i+2);
        }
    }
    return s[i] + replace_pi(s, i+1);
    
}

int main() {
	// your code goes here
	string s;
	cin >> s;
	cout<< replace_pi(s, 0)<<endl;
	cout<<s;
	return 0;
}
