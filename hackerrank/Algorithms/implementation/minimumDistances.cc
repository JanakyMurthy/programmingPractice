#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

/* Author: Janaky Murthy*/

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    int d = n+1;
    for(int i=0; i<n; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                if((j-i) < d )
                {
                    d = (j-i);
                }
                break;
            }
        }
    }
    if(d == n+1) cout << -1;
    else cout << d;
    return 0;
}
