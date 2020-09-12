#include<iostream>
#include<string>

using namespace std;

class GradeBook {
public:
    void displayMessage(string courseName) {
        cout << "welcome to gradebook and " << courseName << endl;
    }
};

int main() {
    GradeBook gb;
    string courseName;
    cout << "Enter the course name : ";
    //cin >> courseName;
    getline(cin, courseName);
    gb.displayMessage(courseName);
}
