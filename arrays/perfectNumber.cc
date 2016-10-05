#include <iostream>
using namespace std;
/* Author: Janaky Murthy */
/*Check if  a given number is perfect or not . A number is perfect if  sum of factorial of its digit is equal to the given number.*/
int factorial (int n)
{
    int fact = 1;
    while(n > 1)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int num;
	    cin >> num;
	    
	    int numCopy = num;
	    int sumOfFactOfDigit = 0;
	    while(num)
	    {
	        int dig = num % 10;
	        sumOfFactOfDigit += factorial(dig);
	        num /= 10;
	    }
	    
	    if(sumOfFactOfDigit == numCopy) cout << "Perfect\n";
	    else cout << "Not Perfect\n";
	}
	return 0;
}