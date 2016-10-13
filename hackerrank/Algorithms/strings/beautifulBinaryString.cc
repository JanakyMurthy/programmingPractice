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

using namespace std;


int main(){
    int n;
    cin >> n;
    string B;
    cin >> B;
    
    bool seenZero = false;
    bool seenZeroOne = false;
    
    int c =0;
    for(int i=0; i<B.length(); i++)
    {
        if(seenZeroOne && B[i] == '0')
        {
          //  cout << i << " changing zero to one \n";
            B[i] = 1;
            seenZero = false;
            seenZeroOne = false;
            c++;
        }
        
        else if(seenZeroOne && B[i] != '0')
        {
            seenZero = false;
            seenZeroOne = false;
        }
        
        else if(seenZero && B[i]=='1') seenZeroOne = true;
        else if(!seenZero && B[i] == '0') seenZero = true;
    }
    cout  << c << "\n";
    return 0;
}
