#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Author: Janaky Murthy*/

int main(){
    string time;
    cin >> time;
    int l = time.length();
    string p = "PM";
    string t = time.substr(l-2,2);
    bool pm = p.compare(t) == 0;
    if(pm)
    {
        int hr = (time[0] - '0') * 10 + (time[1] - '0');
        if(hr!=12) hr += 12;
        if(hr < 10) { time[0] = '0'; time[1] = hr + '0';}
        else { time[1] = (hr % 10) + '0'; hr = hr/10; time[0] = hr + '0'; }
    }
    else
    {
        
        int hr = (time[0] - '0') * 10 + (time[1] - '0');
        if(hr == 12) {time[0] = '0'; time[1] = '0';}
    }
    for(int i=0; i<l-2; i++) cout <<time[i];
    return 0;
}
