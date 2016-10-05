#include <iostream>
using namespace std;

/* Author name: Janaky murthy */
/*Given an array of integers check whether there are two numbers present with given product.*/

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    long p;
	    cin>> p;
	    long * a = new long[n];
	    for(int i=0; i<n; i++) cin >>a[i];
	    
	    bool prod = false;
	    
	    for(int i=0; i<n-1 && !prod;i++)
	    {
	        for(int j=i+1; j<n; j++)
	            if(a[i] * a[j] == p)
	            {
	                prod = true;
	                break;
	            }
	    }
	    
	    if(prod) cout << "Yes\n";
	    else cout <<"No\n";
	    delete a;
	}
	return 0;
}