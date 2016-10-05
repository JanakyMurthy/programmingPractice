#include <iostream>

/* Author: Janaky murthy */
/* Pancake cut: Given an integer N, denoting the number of cuts that can be made on a pancake, how many cut of pancake can a person obtain by making N straight cuts with a pancake knife?.*/

/* Determining the maximum number of pieces in which it is possible to divide a circle for a given number of cuts is called the circle cutting or pancake cutting problem. The minimum number is always n+1, where n is the number of cuts, and it is always possible to obtain any number of pieces between the minimum and maximum. The first cut creates 2 regions, and the nth cut creates n new regions, so on.. */
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cout << (n*n + n + 2) / 2 << "\n";
	}
	return 0;
}