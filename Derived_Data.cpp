#include <iostream>
using namespace std;

struct Student {
    int id;
    char name [20];
    float grade;

};

int main() {
    int scores[5] = {90, 85, 78, 92, 88}; // Array of integers
    int *ptr = &scores[0]; // Pointer to the first element of the array

    Student student1 = {1, "John", 85.5}; // Creating a structure

    cout << "First Score:" << scores[0] <<endl;
    cout << "Pointer to First Score:" <<*ptr << endl;

    cout << "Student ID: " << student1.id << endl;
    cout << "Student Name:" << student1.name << endl;
    cout << "Stude Grade: " << student1.grade << endl;

    return 0;
    }