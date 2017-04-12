// Solution to Hackerrank Problem at Week of Code 31
// Advanced Sorting
// Passed all Cases, Code Accepted for all cases


#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        bool f = true;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1]){
                swap(a[i], a[i+1]);
                if(abs(a[i]-a[i+1]) == 1){
                    continue;
                }
                else{
                    f = false;
                }
            }
        }
        if (f == true){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
