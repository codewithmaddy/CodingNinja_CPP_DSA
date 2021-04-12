#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	string t;
	
	cin >> s;
	cin >> t;
	
	int j=0;
	for(int i=0; i<s.size(); i++)
	{
	    if(s[i]==t[j])
	    {
	        
	         j++;
	        
	    }
	}
	if(j==t.size())
	{
	    cout<<"True";
	}
	else
	{
	    cout<<"False";
	}
	return 0;
}
