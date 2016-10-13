#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Author: Janaky Murthy*/

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int smallest;
    for(int i=0; i<n;i++)
        {
            if(arr[i] > 0) 
            {
                smallest = arr[i];
                break;
            }
        }
    int size = 0;
    for(int i=0; i<n; i++)
     {
        if(arr[i] < smallest && arr[i] > 0) smallest = arr[i];
        if(arr[i] > 0) size++;
    }
    
    while(size > 0)
    {
        cout << size << "\n";
        for(int i=0; i<n; i++)
        {
            if(arr[i] > 0) arr[i] = arr[i] - smallest;
        }
        
        size = 0; 
        for(int i=0; i<n;i++)
        {
            if(arr[i] > 0) 
            {
                smallest = arr[i];
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i] < smallest && arr[i] > 0) smallest = arr[i];
            if(arr[i] > 0) size++;
        }
        
    }
       
    return 0;
}
