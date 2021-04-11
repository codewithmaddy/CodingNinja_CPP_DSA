#include <iostream>
using namespace std;

bool check_h(string s)
{
    if(s[0] == '\0' || s[1] == '\0')
    {
        return true;
    }
    if(s[0] == 'a')
    {
        if(s[1] == 'a')
        {
            return check_h(s.substr(1));
        }
        else if(s[1] == 'b')
        {
            if(s[2] == 'b')
            {
                return check_h(s.substr(2));
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else if(s[0] == 'b')
    {
        if(s[1] == 'a')
        {
            return check_h(s.substr(1));
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

bool check(string s)
{
    if(s[0] == 'a')
    {
        if(s[0] == '\0' || s[1] == '\0')
        {
            return true;
        }
        else
        {
            return check_h(s);
        }
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
	bool b = check(s);
	cout << b ;
	return 0;
}
