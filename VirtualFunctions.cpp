// Virtual Functions

// Solution to Hackerrank Problem at:
// https://www.hackerrank.com/challenges/virtual-functions?h_r=next-challenge&h_v=zen


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person{
    public:
        string name;
        int age;
        virtual void getdata(){
            
        }
        virtual void putdata(){
            
        }
};

class Professor: public Person{
    public:
        static int idP;
        Professor(){
            cur_id = idP++;
        }
        void getdata(){
            cin >> name;
            cin >> age;
            cin >> publications;
        }
        void putdata(){
            cout << name << " " << age << " " << publications << " " << cur_id << endl; 
        }
    private:
        int publications;
        int cur_id;
};

class Student : public Person{
    public:
        int total = 0;
        static int idS;
        Student() {
            cur_id = idS++;
        }
        void getdata() {
            cin >> name;
            cin >> age;
            for(int i=0; i<6; i++){
                cin >> marks[i];
            }
        }

        void putdata() {
            for(int i=0; i<6; i++){
                total += marks[i];
            }
         cout << name << " " << age << " " << total <<  " " << cur_id << endl;   
        }
    private:
        int marks[6];
        int cur_id;
};

int Professor::idP = 1;
int Student::idS = 1;


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}