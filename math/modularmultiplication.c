#include <iostream>
using namespace std;

/* Author: Janaky murthy */
/* Modulo 12 multipliclation */
/* (a*b)%12 = (a%12 * b%12) % 12 */
int main() {
	//code
	
	int t;
	cin >> t;
	while(t--)
	{
	    int n1,n2;
	    cin >> n1 >> n2;
	    int r = ((n1 % 12) * (n2 % 12)) % 12;
	    cout << r << "\n";
	}
	return 0;
}