// Variable Sized Arrays

// Solution to Hackerrank Problem at:
// https://www.hackerrank.com/challenges/variable-sized-arrays

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<vector<int>> a;
    int n, q ,size, values, ai, kj;
    cin >> n >> q;
    for(int i=0; i<n; i++){
        cin >> size;
        vector<int> k;
        for(int j=0; j<size; j++){
            cin >> values;
            k.push_back(values);
        }
        a.push_back(k);
    }
    for(int x=0; x<n; x++){
        cin >> ai >> kj; 
        cout << a[ai][kj] << endl;
    }
    return 0;
}
