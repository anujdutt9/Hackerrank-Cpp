// String Tutorial

// Solution to Hackerrank Problem at:
// https://www.hackerrank.com/challenges/c-tutorial-strings

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int length(string x){
    return x.size();
}

string concat(string a, string b){
    return (a+b);
}

string swapChar(string a, string b){
    swap(a[0],b[0]);
    return (a + " " + b);
}


int main() {
    string a;
    string b;
    string x;
    string y;

    cin >> a;
    cin >> b;

    cout << length(a) << " " << length(b) << endl;
    cout << concat(a,b) << endl;
    cout << swapChar(a,b);
    return 0;
}
