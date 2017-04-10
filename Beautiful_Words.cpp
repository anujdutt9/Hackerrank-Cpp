// Solution to Problem 1 for Hackerrank Week of Code 31
// Beautiful Words
// Submitted and Accepted Code

#include <iostream>
#include "string"

using namespace std;

int main()
{
    string x;
    cin >> x;
    bool f = true;

    for (int i=0; i<x.length(); i++){
        if (((x[i] == 'a') ||(x[i] == 'e') ||(x[i] == 'i') ||(x[i] == 'o') ||(x[i] == 'u') ||(x[i] == 'y')) && ((x[i+1] == 'a')||(x[i+1] == 'e')||(x[i+1] == 'i')||(x[i+1] == 'o')||(x[i+1] == 'u')||(x[i+1] == 'y'))){
            cout << "No";
            f = false;
            break;
        }
        else{
            if(x[i] == x[i+1]){
                cout << "No";
                f = false;
                break;
            }
        }
    }

    if (f == true){
        cout << "Yes";
    }
    return 0;
}
