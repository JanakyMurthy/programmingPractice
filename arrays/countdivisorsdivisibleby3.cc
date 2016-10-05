#include <iostream>
#include <cmath>
using namespace std;

/* Author: janaky murthy */

/*Two friends are playing a game. One gives an integer N  to other and asks: What is the number of divisors of N that are divisible by 3? The task is to help the other friend in finding the number of divisors.*/

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int sqrtn = sqrt(n);
	    int count = 0;
	    for(int i=1; i<=sqrtn; i++)
	    {
	        if(i*i == n && i%3 ==0) count++;
	        else if(n % i== 0)
	        {
	            if(i%3==0) count++;
	            if((n/i) % 3 ==0) count++;
	        }
	    }
	    cout << count << "\n";
	}
	return 0;
}