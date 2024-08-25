#include <iostream>
using namespace std;

enum Day { Sunday, Monday, Tuesday, wednesday, Thursday, Friday, Saturday};
typedef int marks;

int main() {
    Day today = wednesday; // enum type
    marks math = 95; // typedef alias for int

    cout << "Day: " << today << endl; // Will print the integer value of Wednesday (3)
    cout << "Math marks: " << math << endl;

    return 0;
    
}