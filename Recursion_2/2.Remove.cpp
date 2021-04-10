#include <iostream>
using namespace std;

string rd(char str[])
{
    if(str[0] == '\0')
    {
        return "";
    }
    if(str[1] == str[0])
    {
        return rd(str+1);
    }
    else
    {
        return str[0]+rd(str+1);
    }
}

int main() {
	// your code goes here
	char str[100];
	cin >> str;
	cout<< rd(str);
	return 0;
}
