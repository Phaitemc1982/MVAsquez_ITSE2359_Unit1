#include<iostream>
#include <fstream>
using namespace std;

int main() {
    /* commented to work with arrays
    *
    *
    int age = 20; // integer data type
    float height = 5.9; // floating-point data type
    double distance = 12345.6789; // double-precision floating-point data type
    char grade = 'A'; // character data type
    bool isPassed = true; //boolean data type

    cout << "Age: "<< age << endl;
    cout << "Height: " <<height << endl;
    cout << "Distance: " << distance << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << isPassed << endl;
    */

    //int array

ifstream inFile("arr_data.txt");
int size = 6;
int scores [size];
string line;
string testNames [size];

if (!inFile) {
	cerr << "File could not be opened!" << endl;
	
}

for (int i = 0; i < size; ++i) {
	 getline(inFile, line) ;
     inFile >> scores[i];
     testNames[i] = line;
     getline(inFile, line);
}

inFile.close();

    for(int i = 0; i<5; i++)

    {
        cout << testNames[i] << ": ";
        cout << scores[i] << endl;
    }

    return 0;
}