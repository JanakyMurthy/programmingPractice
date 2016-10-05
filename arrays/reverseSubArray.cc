#include <iostream>
using namespace std;

/* Author: Janaky murthy */
/* Given an array, reverse every sub-array formed by consecutive k elements.*/

void reverseArray(int *a , int size)
{
    int st = 0;
    int end = size-1;
    while(st < end)
    {
        int t = a[st];
        a[st] =a[end];
        a[end] = t;
        st++; end--;
    }
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int *a = new int[n];
	    for(int i=0; i<n; i++) cin >> a[i];
	    int k;
	    cin >> k;
	    int subarrayStart = 0;
	    while(subarrayStart < n)
	    {
	        if(subarrayStart + k -1 < n)
	            reverseArray(a+subarrayStart,k);
	       else reverseArray(a+subarrayStart, n-subarrayStart);
	       subarrayStart += k;
	    }
	    for(int i=0; i<n; i++) cout << a[i] << " ";
	    cout << "\n";
	    delete a;
	}
	return 0;
}