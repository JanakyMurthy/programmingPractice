#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*Author: Janaky Murthy*/

int binarySearch(vector<int> a, int st , int end, int key)
{
    int mid;
    while(st <= end )
    {
         mid = (st + end) /2 ;
        if(key == a[mid]) return mid;
        else if(key < a[mid]) end = mid-1;
        else st = mid + 1;
    }
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    cin >> n >> d;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int numOfBeautifulTriplets = 0;
    for(int i = 0; i<n; i++)
    {
        int x = binarySearch(a,i+1,n-1,a[i]+d) ;
        int y = binarySearch(a,i+1,n-1,a[i]+d+d);
        if( x!=-1 && y!=-1 && x < y) numOfBeautifulTriplets++;
    }
    cout << numOfBeautifulTriplets;
    return 0;
}
