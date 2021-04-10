#include <iostream>
using namespace std;

void towerofhanoi(int n, char f, char a, char d)
{
    if(n == 1)
    {
        cout <<"Move disk 1 "<< f <<" -> " << d << endl;
        return;
    }
    towerofhanoi(n-1, f, d, a);
    
    cout <<"Move disk "<<n<<" "<< f <<" -> "<< d << endl;
    
    towerofhanoi(n-1, a, f, d);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	towerofhanoi(n, 'A', 'B', 'C');
	return 0;
}
