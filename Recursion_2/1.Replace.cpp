#include <iostream>
using namespace std;

void replace(char str[], char a, char b)
{
    if(str[0] == '\0')
    {
        return;
    }
    else if(str[0] == a)
    {
        str[0] = b;
    }
    return replace(str+1, a, b);
}

int main() {
	// your code goes here
	char str[100];
	cin >> str;
	
	char a, b;
	cin >> a >> b;
	
	replace(str, a, b);
	
	cout << str;
	return 0;
}
